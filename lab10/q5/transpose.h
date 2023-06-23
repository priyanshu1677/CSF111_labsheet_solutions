//transpose.h

//This function transposes a matrix of dimensions 4*4. The matrix is passed by reference
//You cannot declare any additional matrix
void transposeByReference(int matrix[4][4]);

//This function transposes a matrix of dimensions 4*4. The matrix is passed by using pointer notations. 
//The base address OR the address of the element of first row and first column is passed to the function
//You cannot declare any additional matrix
void transposeByPointer(int*matrix);