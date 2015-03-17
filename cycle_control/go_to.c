#include <stdio.h>
void main()
{
	int i = 1, sum = 0;
	loop:
	if (i<=10)
	{
	sum += i;
	i++;
	printf("%d\n",sum);
	goto loop;
	}
	printf("%d",sum);
}
