#include <stdio.h>
void main ()
{
	int *p, pram1,pram2,*pr1,*pr2;
	printf("Please INput two number:\n");
	scanf("%d %d",&pram1,&pram2);
	pr1=&pram1;
	pr2=&pram2;
	if (pram1<pram2)
	{
		p=pr1;
		pr1=pr2;
		pr2=p;	
	}
	printf("\npram1=%d,pram2=%d\n",pram1,pram2);
	printf("max=%d,min=%d\n",*pr1,*pr2);
}
