#include <stdio.h>

int main(){
	float Marks;
	printf("Enter the marks of the student :");
	scanf("%f",&Marks);
	if (Marks>=0 && Marks<=100){
		if (Marks>=90 && Marks<=100)
		 printf("Congratulations! you got A+");
		else if (Marks>=80 && Marks<90)
		 printf("Congratulations! you got A");
		else if (Marks>=70 && Marks<80)
		 printf("Congratulations! you got B+");
		else if (Marks>=60 && Marks<70)
		 printf("Congratulations! you got B");
		else if (Marks>=50 && Marks<60)
		 printf("Congratulations! you got C+");
		else if (Marks>=40 && Marks<50)
		 printf("Congratulations! you got C");
		else if (Marks>=30 && Marks<40)
		 printf("Congratulations! you got D+");
		else if (Marks>=23 && Marks<30)
		 printf("Congratulations! you got D");
		else if (Marks<23)
		 printf("Sorry! you FAIL!");
	}
	else
	 printf("!Invalid ,Please enter a valid marks");
return 0;
}