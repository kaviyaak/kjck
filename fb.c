#include<stdio.h>
#include<conio.h>
void main()
{
int f=0,s=1,N,limit,i;
printf("enter the limit");
scanf("%d",&limit);
printf("%d %d",f,s);
for(i=2;i<limit;i++)
{
N=f+s;
f=s;
s=N;
printf("%d",N);
}
}
