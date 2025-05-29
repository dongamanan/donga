#include<stdio.h>
int main()
{
	char array[]={'H','e','l','L','o',' ','w','o','r','L','D'};
	
     array[0]=72+32;
     array[1]=101-32;
	 array[2]=108-32;
	 array[3]=76+32;
	 array[4]=111-32;
	 array[6]=119-32;
	 array[7]=111-32;
	 array[8]=114-32;
	 array[9]=76+32;
	 array[10]=68+32;
	 
	 for(int i=0;i<11;i++)
	 {
	 	printf("%c",array[i]);
	 }
}