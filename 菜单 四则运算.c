#include <stdio.h>
#include <math.h>
int main()
{
	int slt;
	double a,b,result;
	while(1)
	{
		printf("1、相加\n");
		printf("2、相减\n");
		printf("3、相乘\n");
		printf("4、相除\n");
		
		printf("请选择(1~5): \n");
		scanf("%d",&slt);
		
		if(slt==5)
		break;
		printf("请输入两个实数\n");
		scanf("%lf %lf",&a,&b);
		
		switch(slt)
		{
			case 1:
				result=a+b; break;
			case 2:
			    result=a-b; break;
			case 3:
			    result=a*b; break;
			case 4:
			    result=a/b; break;	
		}
		printf("%.2f\n\n",result); 
	}
	return 0;
 } 
