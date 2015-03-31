#include <stdio.h>
void main ()
{
	int input;
	scanf("%d",&input);
	printOut(input);
}
void printOut( unsigned int n)
{
	if (n>10)
		printOut(n / 10);
	Printf(n%10);
}
