#include<stdio.h>
int main()
{
	int size,i;
	
	 printf("Enter array size:");
	 scanf("%d",&size);
	 
	 int a[size],b[size],c[size];
	 
	printf("Enter array A's element:\n");
	for(int i=0;i<size;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter array B's element:\n");
	for(int i=0;i<size;i++)
	{
		
		printf("a[%d]=",i);
		scanf("%d",&b[i]);
	}
	printf("array C is(answer):\n");
	for(int i=0;i<size;i++)
	{
		c[i]=a[i]+b[i];
        printf(" c[%d]",c[i]);
	}
}
