#include<stdio.h>
int main()
{
	int a,b,c;
	
	for(a=0;a<=5;a++){
		for(c=0;c<=a;c++){
			printf("  ");
		}
		for(b=5-a;b>=1;b--){
			printf(" %d",b);
		} printf("\n");
	}
}








