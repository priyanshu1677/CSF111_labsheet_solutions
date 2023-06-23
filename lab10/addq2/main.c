#include<stdio.h>
#include"declarations.h"

int main(){
    int n;
    printf("Enter the no. of emloyees\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter Employee's ID\n");
        scanf("%d",&employeeData[i].ID);

        printf("Enter his salary\n");
        scanf("%f",&employeeData[i].salary);

        printf("Enter his division\n");
        scanf("%s",employeeData[i].division);
        
        printf("\n\n");

        employeeDataPointers[i] = &(employeeData[i]);       
    }
    sortData(employeeDataPointers,n);
}