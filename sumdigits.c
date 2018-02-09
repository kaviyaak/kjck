#include <stdio.h>
#include<conio.h>
void main()
{
int a, temp, digit, sum = 0;
printf("Enter the number ");
scanf("%d", &a);
temp = a;
 while (a > 0)
  {
    digit = a% 10;
    sum  = sum + digit;
     a =a/ 10;
    }
    printf("%d", sum);
}
