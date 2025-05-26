#include<stdio.h>
int main()
{
	int row,column;
	int i,j;
	float sum=0;
	printf("Enter pleas row size:");
	scanf("%d",&row);
	
	printf("Enter pleas column size:");
	scanf("%d",&column);
	
	int a[row][column];
	

	printf("Enter array elements:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
	    }
			
	}   
	float average=sum/(row*column);
	
	printf("Avreage of the array:%.2f\n",average);
}