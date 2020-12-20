#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//微信关注公众号【C语言中文社区】，免费领取200G精品学习资源
//将输入的数字转换成10进制数
int convert_to_decimal(char arr[], int initial)
{
    int len, i, num;
    int sum = 0;
    len = strlen(arr);//求得字符串长度
    for (i = 0; i < len; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
            num = arr[i] - '0';
        else if (arr[i] >= 'A' && arr[i] <= 'F')
            num = arr[i] - 'A' + 10;
        sum = sum * initial + num;
    }
    return sum;
}

//将转换好了的10进制数转换为所需进制数
void decimal_to_want(int decimalNum, int target)
{
    int targetNum;
    if (decimalNum)
    {
        decimal_to_want(decimalNum / target, target);
        targetNum = decimalNum % target;
        if (targetNum < 10)
            printf("%d", targetNum);//小于10直接输出
        else
            printf("%c", targetNum + 55);//大于10转换成字符输出
    }
}
int main()
{
    int initial;//待转化数的进制
    int target;//转换后的进制
    char num[20];//待转换数

    do {
        printf("请输入待转换数的进制（2-16）：");
        scanf_s("%d", &initial);
    } while (initial < 2 || initial > 16);
    printf("请输入待转换数：");
    getchar();
    gets_s(num, 20);//将输入的n进制数存放在数组a中
    int decimalNum = convert_to_decimal(num, initial);//将输入的数字转换成十进制数
    do {
        printf("请输入需要转成几进制数（2-16）：");
        scanf_s("%d", &target);
    } while (initial < 2 || initial > 16);
    printf("%d进制数%s转换为%d进制数的结果为：",initial,num,target);
    decimal_to_want(decimalNum, target);//将十进制数转换为所需进制数
    printf("\n");
    system("pause");
    return 0;
}
