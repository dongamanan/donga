#include<stdio.h>
int main()
{
	int size,sum;
	
	
	printf("Enter the array's row & column size:\n");
	scanf("%d",&size);
	
	printf("Enter array's element:");
	int a[size][size];
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		sum=a[i][j]+a[i][j]
	}
}