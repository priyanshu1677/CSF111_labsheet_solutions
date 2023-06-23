#include <stdio.h>
#define size 10
int LinearSearch(int arr[size],int key)
{
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==key){
            return i+1;
        }
    }
    return -1;
}
int BinarySearch(int arr[size],int key)
{
    int i,low=0,high=size,mid;
    while(mid<high && mid>low){
        mid=(low+high)/2;
        if(arr[mid]>key){
            high=mid-1;   
        }
        if(arr[mid]<key){
            low=mid+1;
        }
        if(arr[mid]==key){
            return mid;
        }
        return -1;
    }
    
}
void SelectionSort(int arr[size])
{
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[j]>arr[i]){
                int temp= arr[j];
                arr[j]= arr[i];
                arr[i]= temp;
            }
        }
    }


    int p,q,max;
    for(p=0;p<size-1;p++){
        max=p;
        for(q=p+1;q<size;q++){
           if(arr[q]>arr[max])
           max=q;
        }
        int temp=arr[max];
        arr[max]=arr[p];
        arr[p]=temp;
    }

}
int main() {
    int a,i,k=1;
    while(k)
    {
        int arr[size],key;
    printf("\nEnter 1 for linear Search\n 2 for Binary Search\n 3 for Selection Sort\n 4 to exit\n");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("Enter 10 integers\n");
        for(i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        printf("Enter key value\n");
        scanf("%d",&key);
        int f= LinearSearch(arr,key);
        (f>0)? printf("Element found at %dth location\n",f):printf("Element not found\n");
        break;
        case 2:
        printf("Enter 10 integers\n");
        for(i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        printf("Enter key value\n");
        scanf("%d",&key);
        int z= BinarySearch(arr,key);
        (z>0)? printf("Element found at %dth location\n",z):printf("Element not found\n");
        break;
        case 3:
        printf("Enter 10 integers\n");
        for(i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        SelectionSort(arr);
        int j;
        for(j=0;j<size;j++){
            printf("%d\t",arr[j]);
        }
        printf("\n");
        for(j=size-1;j>=0;j--){
            printf("%d\t",arr[j]);
        }
        break;
        case 4:
        k=0;
        printf("Bye Bye SearchNSort!\n");
        break;
    }
    }

    return 0;
}