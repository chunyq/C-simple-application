#include<stdio.h>
#include<string.h>
main()
{
char p[16];
char s[8][20];
int i,len,a;
printf("藏头诗(1)或者藏尾诗(2)？");
scanf("%d",&a);
if(a==1)
{
for(i=0;i<8;i++)
scanf("%s",s[i]);
len=strlen(s[0]); 
for(i=0;i<8;i++)
{
p[2*i]=s[i][0];  /*注意：汉字占两个字符的位置*/
p[2*i+1]=s[i][1];
}
}
if(a==2)
{
for(i=0;i<8;i++)
scanf("%s",s[i]);
len=strlen(s[0]);
for(i=0;i<8;i++)
{
p[2*i]=s[i][len-2]; /*注意：汉字占两个字符的位置*/
p[2*i+1]=s[i][len-1];
}
}
p[2*i]='\0';
puts("诗中藏意为:");
puts(p);
 
}
