#include<stdio.h>
#include<conio.h>
void main()
{
int a,k;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
k=a%10;
if((k%2)!=0)
printf("odd no is %d",k);
a=a/10;
}}
