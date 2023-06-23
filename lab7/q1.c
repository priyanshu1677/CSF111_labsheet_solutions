#include <stdio.h>

int main()
{
    float arr[10], a;
    int i, j, k;

    printf("Enter 10 real numbers\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &arr[i]);
    }
    /*
    while(i>1){
    for(j=1;j<i;j++){
        if(arr[j-1]>arr[j]){
            float temp= arr[j];
            arr[j]=arr[j-1];
            arr[j-1]= temp;
        }
    }
    i--;
    }
    */
    for (k = 1; k < i; k++)
    {
        for (j = 0; j < i - k; j++)
        {
            if (arr[j] >= arr[j + 1])
            {
                float a = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = a;
            }
        }
    }
    printf("MAX:%f  2nd MAX:%f  MIN:%f  2nd MIN:%f", arr[9], arr[8], arr[0], arr[1]);
    return 0;
}