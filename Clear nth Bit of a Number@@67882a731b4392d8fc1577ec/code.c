#include <stdio.h>

int main() {
    int num, n;

  
    scanf("%d", &num);
    
    printf("Enter the bit position to clear (0-based index): ");
    scanf("%d", &n);

    // Create a mask with the nth bit cleared (using bitwise AND with NOT)
    num = num & ~(1 << n);

    // Print the updated number
    printf("%d",num);

    return 0;
}