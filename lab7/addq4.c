#include<stdio.h>
/*
 void f1(int num,int arr_1[]){
    int key,tempsize=1;int j,t;
    int arr_2[num], arr_3[num];
    arr_2[0]=arr_1[0];

    for(t=0;t<num;t++){
        arr_3[t]=1;
    }

    for(int i=1;i<num;i++){
        key = arr_1[i];
        
        for(j=0;j<tempsize;j++){

            if(arr_2[j]==key){
                arr_3[j]=arr_3[j]+1;
            }       
        }

        arr_2[j+1]=key;
        tempsize++;
    }
    for(int k=0;k<tempsize;k++){
        printf("%d occurs %d times\n",arr_2[k],arr_3[k]);
    }
}
*/
void f1(int size,int arr[]){
    int i,j,arr1[size],arr2[size];
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
               int temp= arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    arr1[0]=arr[0];
    int t=0,k=1; 

    for(i=1;i<size;i++){

        if(arr[i]==arr[i-1]){
            k++;
        }
        arr2[t]=k;

        if(arr[i]!=arr[i-1]){
            k=1;
            arr1[t+1]=arr[i];
            t++;
        }
        if(i==size-1){
            arr2[t]=k;
        }
    
    }
    for(int k=0;k<t+1;k++){
        printf("%d occurs %d times\n",arr1[k],arr2[k]);
    }   

}


int main(){
    int n;
    printf("Enter total number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    f1(n,arr);
    return 0;
}