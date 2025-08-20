#include <stdio.h>

int main(){
	int A;
	int i;
	int MAX;
	int MIN;
	printf("Enter  number1:");
	scanf("%d",&A);
	MAX=A;
	MIN=A;
	for (i=2;i<=10;i++){
	    
		printf("\nEnter  number%d:",i);
	    scanf("%d",&A);
	    if (A>MAX){
	    	MAX=A;
		}
	        
	    if (A<MIN){
	    	MIN=A;
		}
	     
	   
	    
	    
	     
	 }
	 
	printf("\nMAX IS:%d\n",MAX);
	printf("\nMIN IS:%d\n",MIN);
	 
	
	 
return 0;
}