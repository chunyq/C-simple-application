#include<stdio.h>
#include<string.h>
main()
{
char p[16];
char s[8][20];
int i,len,a;
printf("��ͷʫ(1)���߲�βʫ(2)��");
scanf("%d",&a);
if(a==1)
{
for(i=0;i<8;i++)
scanf("%s",s[i]);
len=strlen(s[0]); 
for(i=0;i<8;i++)
{
p[2*i]=s[i][0];  /*ע�⣺����ռ�����ַ���λ��*/
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
p[2*i]=s[i][len-2]; /*ע�⣺����ռ�����ַ���λ��*/
p[2*i+1]=s[i][len-1];
}
}
p[2*i]='\0';
puts("ʫ�в���Ϊ:");
puts(p);
 
}
