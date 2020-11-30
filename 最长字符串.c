#include <stdio.h>
#include <string.h>
#define M 100
int main()
{
	int n,i;
	char str[M];
	char max[M]=" ";
	scanf("%d",&n);
	scanf(" ");
	for(i=1;i<=n;i++)
	{
		gets(str);
		if(strlen(str)>strlen(max))
		strcpy(max,str);
	}
	puts(max);
 } 
