#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,min;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	min=a[i];
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("%d",min);
 
}
