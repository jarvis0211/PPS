#include <stdio.h>

int main() {
	float A;
	printf("Enter a No. to check:");
	scanf("%f",&A);

	if (A>0)
		printf("The No. entred is Positive.");
	else if (A<0)
		printf("The No. entred is Negative.");
	else if (A==0)
		printf("The No. entred is Zero.");
	else
		printf("The number entred is invalid.");

	return 0;




}