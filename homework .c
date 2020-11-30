#include <stdio.h>
double f(double x,int n);
int main()
{
	int n;
	double x;
	scanf("%lf %d",&x,&n);
	printf("%f\n",f(x,n));
	return 0;
 } 
 #include <math.h>
 double f(double x,int n)
 {
 	if(n==1) return x;
 	return pow(-1,n-1)*pow(x,n)+f(x,n-1);
 }
