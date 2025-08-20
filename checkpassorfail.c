#include <stdio.h>

int main(){
	float Marks;
	printf("Enter the marks of the student :");
	scanf("%f",&Marks);
	if (Marks>=0 && Marks<=100){
		if(Marks>=23)
		 printf("Congratulation you PASS!");
		else
		 printf("Sorry you FAIL");
	}
	else
	 printf("!Invalid ,Please enter a valid marks");
return 0;
}