#include<stdio.h>
#include<conio.h>
void main()
{
  int k,count=0,i,n;
  printf("enter the number");
  scanf("%d",&k);
  for(i=1;i<=k;i++)
  {
    if(n%i==0)
    
{
  count++;
}
  }
  if(count==2)
  {
    printf("no");
  }
  else
  {
    printf("yes");
}
