// write a c program to compare 2 strings using for loop

#include <stdio.h>
#include <string.h>

int main (){
	int i,flag;
	char str1[100],str2[100];
	printf("Enter string 1:");
	gets(str1);
	printf("Enter string 2:");
	gets(str2);
	for(i=0;str1[i]!='\0';i++){
		if (str1[i]==str2[i])
			flag =0;
		else 
		 flag =1;
	}
	if (flag ==0)
	 printf("Both strings are same.");
	else 
	 printf("Both strings are different.");

	

return 0;
}
