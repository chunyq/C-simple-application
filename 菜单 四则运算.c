#include <stdio.h>
#include <math.h>
int main()
{
	int slt;
	double a,b,result;
	while(1)
	{
		printf("1�����\n");
		printf("2�����\n");
		printf("3�����\n");
		printf("4�����\n");
		
		printf("��ѡ��(1~5): \n");
		scanf("%d",&slt);
		
		if(slt==5)
		break;
		printf("����������ʵ��\n");
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
