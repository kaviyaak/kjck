
#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20];
	int i,k;
	printf("enter the string");
	scanf("%s",a);
	printf("enter the character");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%c",a[i]);
	}
	
}
