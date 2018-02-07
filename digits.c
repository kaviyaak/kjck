#include <stdio.h>
#include<conio.h>
void main()
{
	int a,b,k,x;
	printf(" enter the number");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		k=(k*10)+b;
		a=a/10;
	}
	while(k!=0)
	{
		x=k%10;
		printf("%d ",x);
		k=k/10;
	}
	return 0;
}
