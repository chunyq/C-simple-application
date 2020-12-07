#include <stdio.h>
int main()
{
	int n,a,b,c;
	char str[10];
	gets(str);
	sscanf(str,"%d",&n);
	sscanf(str,"%1d%1d%1d",&a,&b,&c);
	if(n==a*a*a+b*b*b+c*c*c)
	
	printf("yes\n");
	else
	printf("no\n");

return 0;
}
