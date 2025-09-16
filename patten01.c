#include <stdio.h>

int main() {
    int rows, i, j;
    int current_digit = 0;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

       
        for (j = 1; j <= i; j++) {
            printf("%d ", current_digit);
            
            current_digit = 1 - current_digit;
        }
        printf("\n");
    }

    return 0;
}
