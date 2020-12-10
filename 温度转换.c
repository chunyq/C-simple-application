//实现将华氏温度转换为摄氏温度//
#include <stdio.h>

int main(void)
{
	int celsius,fahr;
	
	
	scanf("%d",&fahr);
	celsius=5 * (fahr-32)/9;
	printf("fahr=%d, celsius=%d\n",fahr,celsius);
	return 0; 
 } 
