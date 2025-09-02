// write a program to calculate average and total of five students for three subjects using nested for loop
# include <stdio.h>

int main(){
	int Sub,Student,Sum,Marks;
	
	for(Student=1;Student<=5;Student++){
		Sum=0;
		printf("Marks of student %d \n",Student);
		for(Sub=1;Sub<=3;Sub++){
		 printf("\nEnter Marks for Subject %d:",Sub);
		 scanf("%d",&Marks);
		 Sum = Sum+Marks;	
		}
		printf("\nThe sum of Marks of students %d is : %d\n",Student,Sum);
	    printf("The Average of Marks of Student %d is : %d\n",Student,Sum/5);
		
	}
	
	
return 0;
	
}
