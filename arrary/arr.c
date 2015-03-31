#include <stdio.h>
void main ()
{
	int i,j,arr[10];
	printf("Please Input Numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("This is Your Input:\n");
	for (j = 0; j < 10; j++)
	{
		printf("%d\t",arr[j]);
	}
	printf("List those number by daxiao:\n");
	for (i = 0; i < 10; i++)
	{
		if (arr[i]<arr[i+1])
		{
			arr[i+1]=arr[i];
		}
	}
	printf("%d\n",arr[9]);
}
