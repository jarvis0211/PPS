 //write a program to print the following patten
  // *
 //  **
 //  *** 

#include<stdio.h>

int main(){
	//int Num=4;
	for(int i=1;i<=4;i++){
		for(int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
return 0;
}
