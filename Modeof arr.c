#include<stdio.h>
#include<limits.h>
int ModeOfArr(int a[], int n);
int main()
{
	int n,a[n],i;
	printf("����������������\n");
	scanf("%d",&n);
	printf("����%d������\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("�ظ�����������:%d",ModeOfArr(a,n));
	return 0;
}
int ModeOfArr(int a[], int n)  /*��Ŀ�Ѿ��涨��int�ͺ�������int�ͺ���һ��ֻ�ܷ���һ��ֵ����Ŀ�Լ��涨�˲����ܳ��ֶ���������*/ 
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

