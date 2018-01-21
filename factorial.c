#include<stdio.h>
#include<coni.h>
void main()
{
int a,i,f=1,n;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("factorial value is%d",f);
}
