//complete this function based on the definitions in reverseArray.h
void reverseArray_PassByReference(int arr[], int size){
    int low=0,high=size-1;
    while(low<high){
        int temp= arr[low];
        arr[low]= arr[high];
        arr[high]= temp;

        low++;
        high--;
    }
}