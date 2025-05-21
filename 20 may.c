#include<stdio.h>
int main()
{
	int a,b,c;
	
	for(a=1;a<=5;a++){
		for(c=5;c>=a;c--){
			printf("  ");
		}
		for(b=a;b>=1;b--){
			printf(" %d",a);
		} printf("\n");
	}
}
/*


                    1








*/