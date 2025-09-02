// write a program to calculate average and total of Given No. of students for given No. of subjects using nested for loop
# include <stdio.h>

int main(){
	int Sub,Student,Sum,Marks,Num,NumS;
	
	printf("Enter the number of student you want to get total and marks of:");
	scanf("%d",&Num);
	printf("Enter the number of subject you want marks of:");
	scanf("%d",&NumS);
	
	
	for(Student=1;Student<=Num;Student++){
		Sum =0;
		printf("Marks of student %d \n",Student);
		for(Sub=1;Sub<=NumS;Sub++){
		 printf("\nEnter Marks for Subject %d:",Sub);
		 scanf("%d",&Marks);
		 Sum += Marks;
	    }
		    
		                 
		printf("\nThe sum of Marks of students %d is : %d\n",Student,Sum);
	    printf("The Average of Student %d is : %f\n",Student,Sum/NumS);
	
		
	}
	
	
	
return 0;
	
}
