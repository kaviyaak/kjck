#include <stdio.h>
#include<conio.h>
void main ()
{
	int a,d,n,i,s=0;
	scanf("%d %d %d",&a,&d,&n);
	for(i=1;i<=n;i++)
	{
		s=s+a;
		a=a+d;
	}
	printf("%d",s);
}
