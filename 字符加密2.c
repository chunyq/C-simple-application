//×Ö·û¼ÓÃÜ2// 
#include <stdio.h>
int main()
{
	char ch;
	int k;
	scanf("%c %d",&ch,&k);
	if(ch+k>'z')
	ch=ch+k-26;
	else
	ch=ch+k;
	printf("%c\n",ch);
	return 0;}
