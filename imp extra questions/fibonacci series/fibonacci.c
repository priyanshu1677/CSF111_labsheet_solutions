#include <stdio.h>

void printFibonacci(int n) {
    int sum = 0, prev = 0;
    int next = 1;
    printf("0 ");
    if (n != 1) {
        for (int k = 0; k < n - 1; k++) {
            sum = prev + next;
            printf("%d ", next);
            prev = next;
            next = sum;
        }
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}
