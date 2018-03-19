#include<stdio.h>
#include<stdio.h>
void main()
{
int n,k=0,m;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
m=n%10;
k=((k*10)+m);
n=n/10;
}
printf("the reverse number is %d",k);
}
