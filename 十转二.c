#include <stdio.h>
void trans(int n);
int main()
{
	int m;
	scanf("%d",&m);
	trans(m);
	return 0;
}

void trans(int n)
{
	if(n==0)  return;
	else
	{
		trans(n/2);
		printf("%d",n%2);
	}
	return;
}
