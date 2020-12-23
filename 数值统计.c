#include<stdio.h>
int main()
{
    int n, i, x;
    int a, b, c;
    scanf("%d", &n);
    a=0;
    b=0;
    c=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d", &x);
        if(x<0)
          a=a+1;
        else if(x==0)
          b=b+1;
        else 
          c=c+1;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}
