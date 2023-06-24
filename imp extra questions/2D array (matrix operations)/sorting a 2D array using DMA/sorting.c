#include <stdio.h>
#include <stdlib.h>

void sortArray(int* array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void displayArray(int* array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i * cols + j]);
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

    // Allocate memory for the 2D array
    int* array = (int*)malloc(rows * cols * sizeof(int));

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array[i * cols + j]);
        }
    }

    // Sort the array
    int size = rows * cols;
    sortArray(array, size);

    printf("Sorted Array:\n");
    displayArray(array, rows, cols);

    // Free allocated memory
    free(array);

    return 0;
}
