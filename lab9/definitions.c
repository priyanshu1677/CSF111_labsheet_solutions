#include <stdio.h>
#include "declarations.h"

void askData(int n, struct student arr[30])
{
    int i;

    printf("Enter their names\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", &arr[i].Name);
    }

    printf("Enter their IDs\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].ID);
    }

    printf("Enter their marks obtained in 5 courses:\n");
    for (i = 0; i < n; i++)
    {

        printf("Enter %s's marks:\n", arr[i].Name);

        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i].Marks[j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum = sum + arr[i].Marks[j];
        }
        arr[i].Avg = sum / 5.00;
    }
}

void displayData(int n, struct student arr[n])
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Data of Student %d\n");
        printf("\nID: %d\n", arr[i].ID);
        printf("NAME: %s\n", arr[i].Name);
        printf("Marks obtained in 5 courses are as follows:\n");
        for (int j = 0; j < 5; j++)
        {
            printf("Course %d: %d\n", j + 1, arr[i].Marks[j]);
        }
        printf("Avg marks: %f", arr[i].Avg);
    }
}
