#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
	char str[N];
	int i,len;
	char cur; //储存正在统计的字符//
	int count; //记录字符出现次数//
	gets(str);
	cur=str[0];
	count=0;  //初始化为0// 
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==cur) //若与当前字符相同，则计数器增1//		
		count++;
		else //若遇不同字符，则输出上一子串的编码// 
		{
			prt(count,cur);
			cur=str[i]; //更新cur// 
			count=1; //计数值更新为1// 
		}
		if(i==len-1)  //若为最后一个字符，则直接输出//
		prt(count,cur); 
	 } 
	 printf("\n");
}

//输出n和ch//
void prt(int n, char ch)
{
	if(n!=1)
	printf("%d",n);
	putchar(ch);
 } 
