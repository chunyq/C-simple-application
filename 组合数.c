int fact(int n)
{
	int i;
	int result=1;
	for(i=2;i<=n;i++)
	{
		result*=i;
	}
	return result;
}
#include <stdio.h>
int fact(int n);
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=fact(a)/fact(b)*fact(a-b);
	printf("c=%d\n",c);
	return 0; 
}
