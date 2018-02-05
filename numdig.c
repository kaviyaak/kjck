#include <stdio.h>
#include<conio.h>
void main()
{
	int k,a;
	printf("\n enter the  number");
	scanf("%d",&k);
	while(k>0)
	{
		k=k/10;
		a++;
	} 
  printf("\n no of digits %d",a);
}
