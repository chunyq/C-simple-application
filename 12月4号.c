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
     printf("��������������:");
     scanf("%d",&n);
     printf("������%d������ :",n);
     for(i=0;i<=n-1;i++)//ȥ���ֺ�
     scanf("%d",&a[i]); 
     max_min(a,n,&max,&min); //Ӧ���Ǵ�������ַ��max_min(a,n,maxp,minp); 
     printf("���ֵ����Сֵ�ֱ���:%d   %d\n",max,min); //maxp,minpû���壬Ӧ����max,min
     return 0;
}
