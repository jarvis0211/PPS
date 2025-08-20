#include<stdio.h>

int main(){
	int Num;
	int i;
	int Factorial =1;
	
	printf("Please Enter the Number you want factorial of :");
	scanf("%d",&Num);
	
	if(Num>=0){
		for(i=1;i<=Num;i++)
	      Factorial = Factorial*i;
	      printf("The factorial of %d is : %d",Num,Factorial);
    }
	else
	 printf("Please enter a valid number for factorial"); 
	
	  
return 0;
}
