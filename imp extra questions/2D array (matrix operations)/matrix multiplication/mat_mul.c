#include <stdio.h>

#define row1 4
#define col1 3
#define row2 3
#define col2 4
#define row3 4
#define col3 4

int main() {
    int M1[row1][col1], M2[row2][col2], M3[row3][col3];
    int i, j, k;
    
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
    
    if (col1 != row2) {
        printf("Multiplication is not possible\n");
        return 0;
    }
    
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            M3[i][j] = 0;
            for (k = 0; k < col1; k++) {
                M3[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
    
    printf("RESULT MATRIX IS:\n");
    for (i = 0; i < row3; i++) {
        for (j = 0; j < col3; j++) {
            printf("%d ", M3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
