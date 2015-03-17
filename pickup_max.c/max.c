#include <stdio.h>
#include <math.h>
#define nmc 32767
void main ()
{
	int a,b;
	float c;
	c = sin(3.14);
	printf("Please Input a arrity\n");
	scanf("%d %d",&a, &b);
	printf("The number you input is: %d %d\nAnd the default is %d\n %d\n%d\n",a,b,nmc,nmc+1,nmc+2);
	printf("%f\n%f\n%d\n",312.32E-2,c,(int)c);
}
