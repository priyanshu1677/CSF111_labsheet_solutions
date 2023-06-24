#include <stdio.h>

int main() {
    printf("Enter a Number: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        int k = i;
        while (k > 0) {
            printf("%d", k);
            k--;
        }
        k = 2;
        while (k <= i) {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}
