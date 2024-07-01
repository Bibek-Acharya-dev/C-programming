#include<stdio.h>

void main() {
    int i, j, a[3][3];
    printf("Enter the elements of the 3x3 matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n"); // Add a newline after each row
    }
}
