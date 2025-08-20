#include <stdio.h>

int main() {
	int Number;
	printf("Enter the Number you want the day:");
	scanf("%d",&Number);

	switch(Number) {
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default :
			printf("invalid Number");
			
	}
	return 0;
}