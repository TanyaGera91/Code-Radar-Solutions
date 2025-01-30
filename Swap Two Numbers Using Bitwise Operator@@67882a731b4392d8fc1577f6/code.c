#include <stdio.h>

void swap(int *a, int *b) {
    if (a != b) {  // To avoid self-swap issue
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main() {
    int x, y;
   // printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("%d%d", x, y);
    
    swap(&x, &y);
    
    printf("After swapping: x = %d, y = %d\n", x, y);
    
    return 0;
}
