#include <stdio.h>
int IsPrime(int n)
{
    if (n == 2)
        return 1;

    int div;
    for (div = 2; div < n; div++)
    {
        if (n % div == 0)
        {
            break;
        }
    }
    if (div == n)
        return 1;
    else
        return 0;
}
int main()
{
    int p;
    for (p = 2; p < 12; p++)
    {
        int s = IsPrime(p);
        printf("%d is %d\n", p, s);
    }
    return 0;
}