#include "transpose.h"
#include <stdio.h>
void printMatrix(int matrix[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int mat1[4][4] = {
        {1, 2, 3, 4},
        {4, 6, 7, 2},
        {5, 9, 3, 1},
        {6, 2, 5, 1}};
    printf("\nMatrix before transpose\n");
    printMatrix(mat1);
    printf("\nMatrix after transposing using pass by reference\n");
    transposeByReference(mat1);
    printMatrix(mat1);
    printf("\nMatrix after again transposing using pass by pointers\n");
    transposeByPointer(mat1);
    printMatrix(mat1);

    return 0;
}