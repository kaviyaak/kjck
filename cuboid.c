#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,h;
int a,k;
printf("enter the values");
scanf("%d%d%d",&l,&b,&h);
a=l*b*h;
printf("volume of a cuboid %d",a);
k=2*((l*b)+(b*h)+(h*l));
printf("the total surface of a cuboid is %d",k);
}
