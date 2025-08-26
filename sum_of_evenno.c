#include<stdio.h>

int main(){
	int Number;
	int i;
	int Evennum =0;
	printf("Enter the number of even number you want sum of :");
	scanf("%d",&Number);
	for (i=1;i<=Number+2;i++)
	    if(i%2==0)
		 Evennum = i+Evennum;
         printf("%d",Evennum);
	
return 0;
	
}
