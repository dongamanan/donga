
#include<stdio.h>
int main()
{
	int a,b,c,d;
	
	for(a=0;a<=5;a++){
		for(b=1;b<=5-a;b++){
			printf(" %d",b);
		}
		for(d=0;d<=a*2;d++){
			printf("  ");
		}
		for(c=5-a;c>=1;c--){
			printf(" %d",c);
		} printf("\n");
	}
}








