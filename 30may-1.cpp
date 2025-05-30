#include<stdio.h>
int a;
void cube()
{
	int cube;
	cube=a*a*a;
	printf("%d",cube);
}
int main()
{
	printf("Enter any number:");
	scanf("%d",&a);
	
	cube();
}

	
