#include <stdio.h>
int IsPrime(int m);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=3;i<=n/2;i=i+2)
	{
		if(IsPrime(i)&&IsPrime(n-i))
		printf("%d %d\n",i,n-i);
	}
	return 0;
 } 
#include <math.h>
int IsPrime (int m)
{
	int i,k;
	if(m==1) return 0;
	k=(int)sqrt(m);
	for(i=2;i<=k;i++)
	{
		if(m%i==0)
		return 0;
	}
	return 1;
}
