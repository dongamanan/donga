#include<stdio.h>
int main()
{
	int a=1,b=2,n,multi=1;
	
	printf("enter n:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		multi *=i;
	}
	printf("sum of all number=%d",multi);
}