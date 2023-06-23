#include <stdio.h>
#include "answer.h"

int main()
{
    int a = 0, i, k;
    for (i = 1; i < 5; i++)
    {
        switch (i)
        {
        case 1:
            k = 5;
            break;
        case 2:
            k = 10;
            break;
        case 3:
            k = 0;
            break;
        case 4:
            k = 4;
            break;
        }
        if (answer(i) == k)
        {
            a++;
        }
    }
    printf("The student has answered %d questions correctly", a);
    return 0;
}