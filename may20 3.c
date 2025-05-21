#include<stdio.h>
int main()
{
	int a,b,c;
	
	for(a=5;a>=1;a--){
		for(c=1;c<=a;c++){
			printf("  ");
		}
		for(b=5;b>=a;b--){
			printf(" %d",a);
		} printf("\n");
	}
}








