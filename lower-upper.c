#include<stdio.h>
int main()
{
char str[100];
int i;
printf("Enter a character :");
gets(str);
for(i=0;str[i]!='\0';i++){
	if(str[i]>='a'&& str[i]<='z'){
		str[i]=str[i]-32;
	}
}
printf("Uppercase string is %s\n",str);
return 0;
}
