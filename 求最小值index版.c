//
#include <stdio.h>
int main()
{
	int n,i,index;
	int a[10];
	printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);  //注意是给谁赋值// 
	index=0;
	for(i=1;i<n;i++)
	{
	if(a[index]>a[i])
	index=i;}
	printf("min is %d\n",a[index]);
	return 0;
}
