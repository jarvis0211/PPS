#include <stdio.h>

int main(){
	char Char;
	
	printf("Enter any character or number or special character :");
	scanf("%c",&Char);
	
	if (Char>='A' && Char<='Z')
	 printf("The entered character is capital case !");
	else if (Char>='a' && Char<='z')
	 printf("The entered character is small case !");
	else if (Char>='0')
	 printf("The entered character is a Digit !");
	else 
	 printf("The entered character is a speial Character !");
	 
	
	
	return 0;
}