//字符分类统计//
#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	int letter=0,digit=0,other=0;
	printf("请输入一串字符\n");
	while(ch=getchar(),ch!='\n')
	{
		if(isalpha(ch))
		letter++;
		else if(isdigit(ch))
		digit++;
		else
		other++;
	}
	printf("letter=%d  digit=%d other=%d\n",letter,digit,other);
	return 0;
}

