#include<stdio.h>
int main()
{
	int a,b;
	
	for(a=1;a<=5;a++)
	{
	  for(b=a;b<=5;b++)
	  	{
	  		if(b%2==1){
	  			printf("\n1");
			  }else
			  {
			  	printf("\n0");
			  }
		  }
	}
	printf("\n");
}