#include <stdio.h>

int main() {
    int k = 0, bitmask;
    printf("Enter the number: ");
    int num;
    scanf("%d", &num);
    
    for (int pos = 0; pos < 8; pos++) {
        bitmask = 1 << pos;
        if ((bitmask & num) != 0) {
            k++;
        }
    }
    
    printf("%d times\n", k);
    
    return 0;
}
