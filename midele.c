#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    int j,r;
    printf("Enter the string:");
    scanf("%s",a);
    j=strlen(a);
    r=j/2;
    a[r]='*';
    printf("%s",a);
    }
