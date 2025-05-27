#include<stdio.h>
int main()
{
	int row,column,i;
	
	 printf("Enter array row size:");
	 scanf("%d",&row);
	 
	 printf("Enter array column size:");
	 scanf("%d",&column);
	 
	 int a[row][column],b[row][column],c[row][column];
	 
	printf("Enter array A's element:\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("a[%d][%d]=",i,j);
		    scanf("%d",&a[i][j]);
		}	
	}
	printf("Enter array B's element:\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("a[%d][%d]=",i,j);
		    scanf("%d",&b[i][j]);
		}
	}
	printf("array C is(answer):\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
            printf(" %d",c[i][j]);
		}printf("\n");
	}
}
