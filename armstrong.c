#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,rem,t=0;
printf("enter the number");
scanf("%d",&n);
r=n;
while(r!=0)
{
rem=r%10;
t=t+rem*rem*rem;
r=r%10;
}
if(s==n)
{
printf("armstrong no");
}
else
{
printf("not a armstrong");
}
}
