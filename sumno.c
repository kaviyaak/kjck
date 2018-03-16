#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum,a[10];
printf("enter the numbers");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("the sum of numbers is %d",sum);
}
