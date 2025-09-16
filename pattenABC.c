 //write a program to print the following patten
  //   AAAAA
 //   BBBB
 //  CCC

#include <stdio.h>

int main() {
    int rows,a=1;
    

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <=rows ; i++) {
        
        for (int k = 1; k <= rows + i; k++) {
            printf(" ");
        }
        
        for (int j = rows; j >= i; j--) {
            printf("%c ",'A'-1+i);
        }
        printf("\n");
        a++;
        
        
    }

    return 0;
}
