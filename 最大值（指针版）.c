void max_min(int a[],int n,int *maxp,int *minp)
{ 
     int i;
     *maxp=a[0];
     *minp=a[0];
     for(i=1;i<=n-1;i++)
     {
          if(a[i]>*maxp)
           *maxp=a[i]; 
          else if (a[i]<*minp) 
           *minp=a[i];
     }
}
#include <stdio.h>
int main()
{
     int a[100],n,i,max,min;
     printf("请输入整数个数:");
     scanf("%d",&n);
     printf("请输入%d个整数 :",n);
     for(i=0;i<=n-1;i++)//去掉分号
     scanf("%d",&a[i]); 
     max_min(a,n,&max,&min); //应该是传变量地址，max_min(a,n,maxp,minp); 
     printf("最大值与最小值分别是:%d   %d\n",max,min); //maxp,minp没定义，应该是max,min
     return 0;
}
