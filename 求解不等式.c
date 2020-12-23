#include <stdio.h>
int main()
{
	int n,m=1;
	long long sum=0;
	scanf("%d",&n);
	while(sum<n){
		long t=1;
		int m1=m;
		while(m1>1){
			t*=m1;
			m1--;
		}
		sum+=t;
		m++;
	}
	printf("m<=%d\n",m-2);
}
