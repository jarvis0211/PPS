#include<stdio.h>

int main(){
    int A;
    int B;
    int C;
    
    printf("enter the first no. A is :");
    scanf("%d",&A);
    printf("enter the second no. B is :");
    scanf("%d",&B);
    
    printf("originally no. A is :%d and no. B is :%d",A,B);
    C=A;
    A=B;
    B=C;
    printf("\nafter interchanging the no. A is :%d and no. B is :%d",A,B);
    
return 0;
}