#include<stdio.h>
int main()
{
	int a=1,b=2,n,sum=0;
	
	printf("enter n:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		sum +=i;
	}
	printf("sum of all number=%d",sum);
}