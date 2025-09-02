// write a program to calculate average and total of five students for three subjects using nested for loop
# include <stdio.h>

int main(){
	int Sub,Student,Sum=0,Marks;
	
	for(Student=1;Student<=5;Student++){
		
		printf("Marks of student %d \n",Student);
		for(Sub=1;Sub<=3;Sub++){
		 printf("\nEnter Marks for Subject %d:",Sub);
		 scanf("%d",&Marks);
		 Sum = Sum+Marks;	
		}
		
	}
	printf("\nThe sum of all students is : %d\n",Sum);
	printf("The Average is : %d\n",Sum/5);
	
return 0;
	
}
