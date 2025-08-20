#include <stdio.h>

int main(){
	int A;
	int B;
	int C;
	
	printf("Enter First No.:");
	scanf("%d",&A);
	printf("\nEnter Second No.:");
	scanf("%d",&B);
	printf("\nEnter Third No.:");
	scanf("%d",&C);
	
	if (A>B && A>C) 
	  printf("The gretest no. is : %d" ,A);
	else if (A>=B || B>C)
	 printf("The gretest no. is : %d",B);
	else 
	 printf("The gretest no. is : %d",C);

return 0;
}