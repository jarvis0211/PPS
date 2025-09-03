// writ a program to print the sum of 1+1/2+1/3...+1/n

#include <stdio.h>

double sum(int n){
	double i,s=0.0;
	for(i=1;i<=n;i++)
	 s = s + 1/i;
	return s;

}


int main(){



int Num;
printf("Enter the number of terms you want sum of :");
scanf("%d",&Num);
printf("the sum is :%f",sum(Num));

return 0;
}
