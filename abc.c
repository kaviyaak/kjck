#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
d=a*b%c;
printf("the remainder is %d",d);
}
