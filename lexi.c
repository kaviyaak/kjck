#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10];
	int n,i;
	scanf("%s",&a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
    }
}
