#include <stdio.h>
void main ()
{
	int a,b,c,*p1,*p2,*p3;
	scanf("%d %d %d",&a,&b,&c);
	p1=&a;p2=&b;p3=&c;
	exchang(p1,p2,p3);
	printf("\n%d %d %d",a,b,c);
}
int swap(int *pt1,int *pt2)
{
	int temp;
	temp=*pt1;
	*pt1=*pt2;
	*pt2=temp;
}
int exchang (int *q1, int *q2, int *q3)
{
	if (*q1>*q2)swap(q1,q2);
	if (*q1>*q3)swap(q1,q3);
	if (*q2>*q3)swap(q2,q3);
}


