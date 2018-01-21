#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,rem,temp,r,t=0;
printf("enter the interval");
scanf("%d%d",&n,&k);
printf("armstrong bwt interval is");
for(r=n+1;r<k;++r)
{
temp=r;
while(temp!=0)
{
rem=temp%10;
t=rem*rem*rem;
temp=temp/10;
}
}
if(r==t)
{
printf("%d",r)
}}

