#include <stdio.h>
void printstar(int n);
int main()
{
	int m,n;
	scanf("%d",&n); //ע��:�����n����Ҫ��ӡ����// 
	for(m=1;m<=n;m++)  //ѭ���������// 
	printstar(m); 
	return 0;    //��ӡ��m���Ǻ� ����ӡm��// 
	  } 
	  
void printstar(int n)
{
	int i;
	for(i=1;i<=n;i++)
	   putchar('*');
	
	putchar('\n');
}
