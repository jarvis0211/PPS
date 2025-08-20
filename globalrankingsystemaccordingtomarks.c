#include <stdio.h>

int main(){
	float Marks;
	printf("Enter the marks of the student :");
	scanf("%f",&Marks);
	if (Marks>=0 && Marks<=100){
		if (Marks>=80 && Marks<=100)
		 printf("Congratulations! you got Distinction");
		else if (Marks>=60 && Marks<80)
		 printf("Congratulations! you got First Class!");
		else if (Marks>=40 && Marks<60)
		 printf("Congratulations! you got Second class!");
		else if (Marks<40)
		 printf("Sorry! you got Fail!");
		
	}
	else
	 printf("!Invalid ,Please enter a valid marks");
return 0
}