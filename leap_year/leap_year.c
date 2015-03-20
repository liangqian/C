#include <stdio.h>
void main ()
{
	int year;
	printf("Please Input a year:\n");
	scanf("%d",&year);
	if (year%400 == 0 || year%4 == 0  )
	{
		printf("This Year Is Leap Year!\n");
	}
	else 
		printf("NO!NO!!NO!!!This Year Is not leap_Year\n ");
}
