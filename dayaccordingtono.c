#include <stdio.h>

int main(){
	int Number;
	printf("Enter the Number between 1-7 you want :");
	scanf("%d",&Number);
	if(Number>0 && Number<=7) {
		if (Number == 1)
		 printf("It's MONDAY !");
	    else if (Number == 2)
		 printf("It's TUESDAY!");
		else if (Number == 3)
		 printf("It's WEDNESDAY!");
		else if (Number == 4)
		 printf("It's THURSDAY!");
		else if (Number == 5)
		 printf("It's FRIDAY!");
		else if (Number == 6)
		 printf("It's SATURDAY!");
		else if (Number == 7)
		 printf("It's SUNDAY!");
	}
	else 
	 printf("please enter a valid number!");
	
	return 0;
}