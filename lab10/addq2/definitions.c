#include <stdio.h>
#include "declarations.h"

void sortData(struct employee *arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        struct employee *min = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (employeeData[j].salary < employeeData[i].salary)
            {
                struct employee *temp = arr[j];
                arr[j] = min;
                min = temp;
            }
        }
        arr[i] = min;
    }

    for (int k = 0; k < n; k++)
    {
        struct employee emp = *arr[k];
        printf("ID: %d\n", emp.ID);
        printf("Salary: %f\n", emp.salary);
        printf("Division: %s\n", emp.division);
    }
}