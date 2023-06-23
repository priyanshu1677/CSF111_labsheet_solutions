#include <stdio.h>
#include <math.h>

int IsAmstrong(int p, int q)
{

    for (int i = p; i <= q; i++)
    {
        int sum = 0;
        int n, j, k;
        for (n = 1; n < 10; n++)
        {
            int pw = pow(10, n);
            j = i / pw;
            if (j == 0)
                break;
        }
        printf("%d\n", n);
        if (n == 1)
            return 1;
        if (j != 0)
            return -1;

        int d = i;
        for (k = n - 1; k > 0; k--)
        {
            int a, temp;
            a = pow(10, k);
            temp = (d - (d % a)) / a;
            sum = sum + pow(temp, n);
            d = (d % a);
            printf("%d: %d\n", i, sum);
        }
        if (k == 0)
        {
            sum = sum + pow(d, n);
        }
        printf("%d: %d\n", i, sum);
        if (sum == i)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int p = 150, q = 160;
    int s = IsAmstrong(p, q);
    if (s > 0)
        printf("Amstrong present\n");
    if (s == 0)
        printf("Amstrong absent\n");
    if (s < 0)
    {
        printf("The range is invalid");
    }
    return 0;
}