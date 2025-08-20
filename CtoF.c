#include <stdio.h>

int main(){
	float C;
	float F;
	
	printf("Enter the temperatuer in Centigrate :");
	scanf("%f",&C);
	F= 1.8*C+32;
	printf("The temperatuer in Fahrenheit is :%f",F);
	
	return 0;
	
}