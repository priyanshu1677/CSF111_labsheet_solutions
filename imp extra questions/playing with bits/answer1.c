#include <stdio.h>

void getBit(int n, int pos) {
    int bitmask = 1 << pos;
    if ((bitmask & n) == 0) {
        printf("bit was zero\n");
    } else {
        printf("bit was one\n");
    }
}

int setBit(int n, int pos) {
    int bitmask = 1 << pos;
    int k = (bitmask | n);
    return k;
}

int clearBit(int n, int pos) {
    int bitmask = 1 << pos;
    int notBitmask = ~(bitmask);
    int k = (notBitmask & n);
    return k;
}

int updateBit(int n, int pos) {
    printf("Enter oper: ");
    int k;
    scanf("%d", &k);
    if (k > 0) {
        n = setBit(n, pos);
    } else {
        n = clearBit(n, pos);
    }
    return n;
}

int main() {
    int n = 5;
    getBit(n, 3);
    printf("%d\n", setBit(n, 3));
    printf("%d\n", clearBit(n, 3));
    n = updateBit(n, 3);
    printf("%d\n", n);

    return 0;
}
