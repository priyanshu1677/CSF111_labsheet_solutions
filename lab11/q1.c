#include<stdio.h>

void fun1(int arr[],int size){
    int temp=arr[0];
    arr[0]=arr[size-1];
    arr[size-1]=temp;
}

int main(){   
    int array[10]={1,2,3,4,5,6,7,8,9,0};
    fun1(array,10);
    for(int i=0;i<10;i++){
        printf("%d\n",array[i]);
    }
}