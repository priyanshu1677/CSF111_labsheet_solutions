// transpose.c

// implement this function as defined in transpose.h
void transposeByReference(int matrix[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            // Swap elements at (i, j) and (j, i)
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

// implement this function as defined in transpose.h
void transposeByPointer(int *matrix)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            // Swap elements at (i, j) and (j, i) using pointer arithmetic
            int *element1 = matrix + i * 4 + j;
            int *element2 = matrix + j * 4 + i;
            int temp = *element1;
            *element1 = *element2;
            *element2 = temp;
        }
    }
}