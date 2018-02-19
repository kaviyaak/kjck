#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
int i,length,c=0;
printf("enter the character");
scanf("%c",&a);
length=strlen(c);
for(i=0;i<length;i++)
{
    if(a[i]=="\t ")
    ++c;
}
printf("the length is %d",c);
getch();
}
