#include <stdio.h>

#define ROW 10
#define COL 10

int main() {
    int M1[ROW][COL], M2[ROW][COL], M3[ROW][COL], i, j;
    int row1, col1, row2, col2;
    
    printf("Enter row value for M1: ");
    scanf("%d", &row1);
    
    printf("Enter column value for M1: ");
    scanf("%d", &col1);
    
    printf("Enter row value for M2: ");
    scanf("%d", &row2);
    
    printf("Enter column value for M2: ");
    scanf("%d", &col2);
    
    if (row1 != row2 || col1 != col2) {
        printf("Invalid Input: Addition is not possible\n");
        return 0;
    }
    
    printf("Enter data for Matrix M1:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &M1[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter data for Matrix M2:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &M2[i][j]);
        }
        printf("\n");
    }
    
    printf("Addition of Matrices is as follows:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            M3[i][j] = M1[i][j] + M2[i][j];
        }
    }
    
    // Display the new matrix after addition
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d ", M3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
