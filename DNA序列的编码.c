#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
	char str[N];
	int i,len;
	char cur; //��������ͳ�Ƶ��ַ�//
	int count; //��¼�ַ����ִ���//
	gets(str);
	cur=str[0];
	count=0;  //��ʼ��Ϊ0// 
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==cur) //���뵱ǰ�ַ���ͬ�����������1//		
		count++;
		else //������ͬ�ַ����������һ�Ӵ��ı���// 
		{
			prt(count,cur);
			cur=str[i]; //����cur// 
			count=1; //����ֵ����Ϊ1// 
		}
		if(i==len-1)  //��Ϊ���һ���ַ�����ֱ�����//
		prt(count,cur); 
	 } 
	 printf("\n");
}

//���n��ch//
void prt(int n, char ch)
{
	if(n!=1)
	printf("%d",n);
	putchar(ch);
 } 
