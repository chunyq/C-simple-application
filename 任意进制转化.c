#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//΢�Ź�ע���ںš�C���������������������ȡ200G��Ʒѧϰ��Դ
//�����������ת����10������
int convert_to_decimal(char arr[], int initial)
{
    int len, i, num;
    int sum = 0;
    len = strlen(arr);//����ַ�������
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

//��ת�����˵�10������ת��Ϊ���������
void decimal_to_want(int decimalNum, int target)
{
    int targetNum;
    if (decimalNum)
    {
        decimal_to_want(decimalNum / target, target);
        targetNum = decimalNum % target;
        if (targetNum < 10)
            printf("%d", targetNum);//С��10ֱ�����
        else
            printf("%c", targetNum + 55);//����10ת�����ַ����
    }
}
int main()
{
    int initial;//��ת�����Ľ���
    int target;//ת����Ľ���
    char num[20];//��ת����

    do {
        printf("�������ת�����Ľ��ƣ�2-16����");
        scanf_s("%d", &initial);
    } while (initial < 2 || initial > 16);
    printf("�������ת������");
    getchar();
    gets_s(num, 20);//�������n���������������a��
    int decimalNum = convert_to_decimal(num, initial);//�����������ת����ʮ������
    do {
        printf("��������Ҫת�ɼ���������2-16����");
        scanf_s("%d", &target);
    } while (initial < 2 || initial > 16);
    printf("%d������%sת��Ϊ%d�������Ľ��Ϊ��",initial,num,target);
    decimal_to_want(decimalNum, target);//��ʮ������ת��Ϊ���������
    printf("\n");
    system("pause");
    return 0;
}
