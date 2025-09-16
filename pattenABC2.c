 //write a program to print the following patten
  //   ABC
 //   AB
 //  A

#include <stdio.h>

int main() {
    int rows,a=1;
    

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >=1 ; i--) {
        
        for (int k = 1; k <= rows-i; k++) {
            printf(" ");
        }
        
        for (int j = 0; j < i; j++) {
            printf("%c ",'A'+j);
        }
        printf("\n");
        a++;
        
        
    }

    return 0;
}
