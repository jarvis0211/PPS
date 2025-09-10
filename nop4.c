 //write a program to print the following patten
  //   *
 //   **
 //  ***

#include <stdio.h>

int main() {
    int rows,a=1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        
        for (int k = 1; k <= rows - i; k++) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("%d ",a);
        }
        printf("\n");
        a++;
    }

    return 0;
}
