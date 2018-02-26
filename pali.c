#include<stdio.h>
#include<conio.h>
{
char b;
int i,flag=0;
printf("enter a string");
gets(b);
len=strlen(b);
for(i=0;i<len;i++)
{
if(b[i]==b[len-i-1])
flag=flag+1;
}
if(flag==len)
printf(" yes");
else
printf("no");
}
