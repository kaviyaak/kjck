#include<stdio.h>
void main()
{
int b[20],n,a,i;
printf("Enter the number:");
scanf("%d %d",&n,&a);
printf("Enter %d values:",n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
  if(b[i]==a)
  {
    printf("%d",b[i]);
  }
}

}
