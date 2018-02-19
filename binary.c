#include<stdio.h>
#include<conio.h>
void main()
{
int i,k,n[k],flag=0;
printf("enter the size");
scanf("%d",&k);
printf("enter the number");
for(i=0;i<k;i++)
scanf("%d",&n[i]);
for(i=0;i<k;i++)
{
if((n[i]==0)||(n[i]==1))
{
flag++;
}
}
if(flag!=0)
printf(" binary number");
else
printf("not a binary number");
}

