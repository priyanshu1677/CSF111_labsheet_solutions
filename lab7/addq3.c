#include<stdio.h>

float mean(int arr[],int size){
    int i,sum=0;
    for(i=0;i<size;i++){
        sum = sum + arr[i];
    }
    float p = sum/(size*1.00);
    return p;
}
int median(int arr[],int size){
    int i,j,k;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
               int temp= arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    if(size%2 == 0){
        int p= (size/2) ;
        k= arr[p-1] + arr[p];
        return k/2;
    }
    else{
        k= size - 1;
        return arr[(k/2)];
    }
}
int main(){
    int k=7,j=8;
    int arr_1[] = {7,3,4,1,0,2,6};
    int arr_2[] = {2,3,5,1,3,9,2,8};
    float p = mean(arr_1,k);
    float q = mean(arr_2,j);
    int r = median(arr_1,k);
    int s = median(arr_1,j);
    printf("MEAN OF ARRAY 1: %f\n",p);
    printf("MEAN OF ARRAY 2: %f\n",q);
    printf("MEADIAN OF ARRAY 1: %d\n",r);
    printf("MEADIAN OF ARRAY 2: %d\n",s);
}