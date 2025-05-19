#include<stdio.h>
int main()
{
	int a,b;
	char ch='A';
	for(a=0;a<5;a++)
	{
	  for(b=a;b>=0;b--)
	  	{
	  	 printf("%c ",'A'+b);
		}
			printf("\n");
	}

}