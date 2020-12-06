//升序序列插入新元素//
#include <stdio.h>
#define N 9
int main()
{
	int x,i;
	int a[N+1]={1, 2, 4, 7, 8, 11, 16, 21, 35};
	scanf("%d",&x);
	for(i=N-1;i>=0;i--)
	{
		if(a[i]>x)
		a[i+1]=a[i];
		else
		break;
	}
	a[i+1]=x;
	for(i=0;i<=N;i++)
	printf("%d    ",a[i]);
	printf("\n");
	return 0;
 } 
