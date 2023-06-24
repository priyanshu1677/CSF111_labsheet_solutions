#include <stdio.h>

#define ROWS 5
#define COLS 6

void printSpiralPattern(int matrix[][COLS], int rows, int cols) {
    int row_start = 0, col_end = cols - 1;
    int row_end = rows - 1, col_start = 0;

    while (row_start <= row_end && col_start <= col_end) {
        for (int j = col_start; j <= col_end; j++) {
            printf("%d ", matrix[row_start][j]);
        }
        row_start++;

        for (int k = row_start; k <= row_end; k++) {
            printf("%d ", matrix[k][col_end]);
        }
        col_end--;

        if (row_start <= row_end) {
            for (int j = col_end; j >= col_start; j--) {
                printf("%d ", matrix[row_end][j]);
            }
            row_end--;
        }

        if (col_start <= col_end) {
            for (int k = row_end; k >= row_start; k--) {
                printf("%d ", matrix[k][col_start]);
            }
            col_start++;
        }
    }
}

int main() {
    int matrix[ROWS][COLS];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Spiral Pattern: ");
    printSpiralPattern(matrix, ROWS, COLS);

    return 0;
}
