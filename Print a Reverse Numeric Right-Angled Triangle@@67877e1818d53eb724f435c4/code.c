#include <stdio.h>

void print_reverse_numeric_triangle(int N) {
    for (int i = N; i >= 1; i--) {  // Loop from N to 1
        for (int j = 1; j <= i; j++) {  // Print numbers from 1 to i
            printf("%d", j);
        }
        printf("\n");  // Move to the next line
    }
}

int main() {
    int N;
    
    // Take input from user
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Function call
    print_reverse_numeric_triangle(N);

    return 0;
}
