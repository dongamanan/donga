#include<stdio.h>
int main()
{
	int size;
	 int a[size],b[size],c[size];
	
	printf("Enter array size:");
	scanf("%d",&size);
	
	printf("Enter array A's element:");
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		printf("a[%d]=",a[i]);
		scanf("%d",&a[i])
	}
	printf("Enter array B's element:");
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		printf("a[%d]=",b[i]);
		scanf("%d",&b[i])
	}
	
	c[i]=a[i]+b[i];
	printf("c[%d]",c[i]);
}

