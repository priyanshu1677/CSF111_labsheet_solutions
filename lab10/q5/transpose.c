//transpose.c

//implement this function as defined in transpose.h
void transposeByReference(int matrix[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            matrix[i][j]=matrix[j][i];
        }
    }
}


//implement this function as defined in transpose.h
void transposeByPointer(int* matrix){
    
}