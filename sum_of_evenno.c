#include<stdio.h>

int main(){
	int Number;
	int i;
	int Evennum =2;
	int sum =0;
	printf("Enter the number of even number you want sum of :");
	scanf("%d",&Number);
	for (i=1;i<=Number;i++){
        sum +=Evennum;
        Evennum +=2;
    }
    printf("The sum of first %d Digit is : %d",Number,sum);
        
		 
return 0;
	
}
