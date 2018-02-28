#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the limit");
scanf("%d %d",&a,&b);
printf("enter the checking no");
scanf("%d",&c);
if((c<<a)||(c<b))
{
printf("yes");
}
else
{
printf("no");
}
}
