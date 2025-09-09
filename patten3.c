 //write a program to print the following patten
  //   ***
 //   *****
 //  ******* 

#include<stdio.h>

int main(){
	int Num;
	printf("Enter a number you want rows of:");
	scanf("%d",&Num);
	for(int i=2;i<=Num+1;i++){
		 for(int j=1;j<=2*i-1;j++){
		 	printf(" * ");
		 }
		
		printf("\n");
	}
return 0;
}
