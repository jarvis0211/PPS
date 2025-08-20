#include<stdio.h>

int main(){
	int A;
	int B;
	
	
	printf("Enter the number you want to check :");
	scanf("%d",&A);
	B = A%2;
	
	if(B==0)
	 printf("The given number is even.");
    else
	 printf("The given number is odd. ");
	 
  return 0;	
}