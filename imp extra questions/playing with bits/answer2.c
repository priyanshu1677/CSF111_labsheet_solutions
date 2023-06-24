#include <stdio.h>

int updateBit(int update_to, int num, int pos) {
    int bitmask = 1 << pos;
    if (update_to == 0) {
        int notBitmask = ~(bitmask);
        return (notBitmask & num);
    } else {
        return (bitmask | num);
    }
}

int getBit(int n, int pos) {
    int bitmask = 1 << pos;
    if ((bitmask & n) == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    printf("Enter the bit to be toggled: ");
    int toggle;
    scanf("%d", &toggle);

    printf("Enter the number and the position in which it has to be toggled: ");
    int num, pos;
    scanf("%d %d", &num, &pos);

    int temp;
    for (int i = 7; i >= pos; i--) {
        temp = getBit(num, i);
        num = updateBit(temp, num, i + 1);
    }
    num = updateBit(toggle, num, pos);
    printf("%d\n", num);

    return 0;
}
