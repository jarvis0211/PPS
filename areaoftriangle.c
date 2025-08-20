#include<stdio.h>

int main(){
	float base;
	float height;
	float Area;
	
	printf("Enter the base of triangle :");
	scanf("%f",&base);
	printf("Enter the height of triangle :");
	scanf("%f",&height);
	Area = 0.5*base*height ;
	printf("The area of the given right angle triangle is :%f ",Area);
	return 0;
	 
}