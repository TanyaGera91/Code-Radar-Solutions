#include <stdio.h>

int main() {
    int num, n;

  
    scanf("%d", &num);
    scanf("%d", &n);

    // Create a mask with the nth bit cleared (using bitwise AND with NOT)
    num = num & ~(1 << n);

    // Print the updated number
    printf("%d",num);

    return 0;
}