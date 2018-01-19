#include<stdio.h>
#include<conio.h>
{
char a;
int i,flag=0;
printf("enter a string");
gets(a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]==a[len-i-1])
flag=flag+1;
}
if(flag==len)
printf("palindrome");
else
printf("not a palindrome");
}
