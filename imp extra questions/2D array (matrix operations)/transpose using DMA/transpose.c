#include <stdio.h>
#include <stdlib.h>

void transposeMatrix(int** matrix, int** transpose, int rows, int cols) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
}

void displayMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for the matrix
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Allocate memory for the transpose matrix
    int** transpose = (int**)malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) {
        transpose[i] = (int*)malloc(rows * sizeof(int));
    }

    // Compute the transpose of the matrix
    transposeMatrix(matrix, transpose, rows, cols);

    printf("Original Matrix:\n");
    displayMatrix(matrix, rows, cols);

    printf("Transpose Matrix:\n");
    displayMatrix(transpose, cols, rows);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    for (int i = 0; i < cols; i++) {
        free(transpose[i]);
    }
    free(transpose);

    return 0;
}
