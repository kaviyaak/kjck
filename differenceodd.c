#include<stdio.h>
#include<conio.h>
void main()
{
int a,k,m;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&k);
m=a-k;
if(m%2==0)
{
printf("even number");
}
else
{
printf("odd number");
}
}
