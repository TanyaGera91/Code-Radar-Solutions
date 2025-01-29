#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if LSB is set using bitwise AND
    if (num & 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}