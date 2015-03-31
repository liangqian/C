#include <stdio.h>
void main ()
{
	int arr[]={23,345,56,1,8,4};
	int i,j;
	for (i=0;i<6;i++)
	{
		printf("%d\t",arr[i]);
	}
		printf("\n");
	for (i=0;i<6;i++)
	{
		for (j=0;j<6-j-1;j++)
		{
		if (arr[j]>arr[j+1])
		{
		int temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		}
		}
	}
	for (i=0;i<6;i++)
	{
		printf("%d\t",arr[i]);
	}
		printf("\n");
}
