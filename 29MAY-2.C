#include<stdio.h>
int main()
{
	char array[]={'H','E','L','L','O',' ','W','O','R','L','D'};
	
     array[0]=72+32;
     array[1]=69+32;
	 array[2]=76+32;
	 array[3]=76+32;
	 array[4]=79+32;
	 array[6]=87+32;
	 array[7]=79+32;
	 array[8]=82+32;
	 array[9]=76+32;
	 array[10]=68+32;
	 
	 for(int i=0;i<11;i++)
	 {
	 	printf("%c",array[i]);
	 }
}