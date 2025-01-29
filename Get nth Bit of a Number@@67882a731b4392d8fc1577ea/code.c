#include <stdio.h>

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    // printf("%d",num & (1 << n));
    // Check if the nth bit is set using bitwise AND
    if (num & (1 << n)) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}