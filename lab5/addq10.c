/*Write a program that reads an integer value for n and then sums the integers
from n to 2*n if n is nonnegative, or from 2*n to 3*n if n is negative.*/

#include <stdio.h>

int main(void)
{
    int n,sum=0;
    scanf("%i",&n);
    if (n>=0)
    {
        for(int i=n;i<=2*n;i++)
        {
            sum=sum+i;
        }
    }
    else
    {
        for(int i=3*n;i<=2*n;i++)
        {
            sum=sum+i;
        }
    }
    printf("Result : %i",sum);
}
