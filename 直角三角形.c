#include <stdio.h>
void printstar(int n);
int main()
{
	int m,n;
	scanf("%d",&n); //注意:这里的n代表要打印行数// 
	for(m=1;m<=n;m++)  //循环输出星星// 
	printstar(m); 
	return 0;    //打印第m行星号 并打印m个// 
	  } 
	  
void printstar(int n)
{
	int i;
	for(i=1;i<=n;i++)
	   putchar('*');
	
	putchar('\n');
}
