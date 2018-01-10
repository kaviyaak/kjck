#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the no \n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is greater");
}
elseif(b>a&&b>c)
{
printf("bi greater");
}
else
{
printf("c is greater");
}
}
