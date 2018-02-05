*******************************************************************************/
#include <stdio.h>
#include<conio.h>
void main()
{
 int a[20],sum,avg;
	int n,i;
	printf("Enter no ");
	scanf("%d", &n);
	printf("Enter %d number",n);
	for(i=0;i < n;i++)
	{
	   scanf("%d", &a[i]);
	}
	sum = 0;
	for(i=0;i < n;i++)
	{
		sum += a[i];
	}
	avg = sum / n;
	printf("The average of numbers is %d",avg);
}
