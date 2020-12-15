#include<stdio.h>
#include<limits.h>
int ModeOfArr(int a[], int n);
int main()
{
	int n,a[n],i;
	printf("请输入整数个数：\n");
	scanf("%d",&n);
	printf("输入%d个整数\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("重复次数最多的数:%d",ModeOfArr(a,n));
	return 0;
}
int ModeOfArr(int a[], int n)  /*题目已经规定是int型函数，而int型函数一次只能返回一个值，题目自己规定了不可能出现多个数的情况*/ 
{
	int b[]={0},i,j,max=INT_MIN,t;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[i]==a[j])
				b[i]++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>max&&b[i]!=0)
			max=b[i],t=i;
	}
	return a[t];
}

