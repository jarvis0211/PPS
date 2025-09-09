 //write a program to print the following patten
  // ***
 //  ***
 //  *** 

#include<stdio.h>

int main(){
	int Num;
	printf("Enter a number you want rows of:");
	scanf("%d",&Num);
	for(int i=1;i<=Num;i++){
		 for(int j=1;j<=Num;j++){
		   printf(" * ");
		 }
		
		printf("\n");
	}
return 0;
}
