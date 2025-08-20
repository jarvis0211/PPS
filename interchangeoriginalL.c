 #include<stdio.h>

int main(){
	int A;
	int B;
	int C;
	
	printf("Enter the first number A is :");
	scanf("%d",&A);
	printf("Enter the second number B is :");
	scanf("%d",&B);
	
	printf("Originally the No. A is :%d and No. B is :%d",A,B);
	C=A;
	A=B;
	B=C;
	printf("\nAfter interchanging the No. A is :%d and No. B is :%d",A,B);
	
	
return 0;
}
	
	
	
	