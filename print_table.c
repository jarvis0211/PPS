#include <stdio.h>

int main(){
	int Number;
	int i;
	int multiplyer;
	printf("Enter the number you want table of :");
	scanf("%d",&Number);
	
	for(i=1;i<=10;i++){
		multiplyer = Number*i;
		printf("%dx%d=%d\n",Number,i,multiplyer);
	}
return 0;
}
