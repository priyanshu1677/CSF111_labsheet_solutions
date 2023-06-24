#include <stdio.h>

int findGcd(int p, int q) {
    int max = p * q;
    int k;
    for (k = q; k < max; k++) {
        if (k % p == 0 && k % q == 0) {
            return k;
        }
    }
    return max;
}

int main() {
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int c = findGcd(a, b);
    printf("Greatest Common Divisor: %d\n", c);
    return 0;
}
