#include <stdio.h>
#include "declarations.h"

int main()
{
    int n;
    printf("Enter total no. of students:\n");
    scanf("%d", &n);
    askData(n, arr);
    displayData(n, arr);
    return 0;
}