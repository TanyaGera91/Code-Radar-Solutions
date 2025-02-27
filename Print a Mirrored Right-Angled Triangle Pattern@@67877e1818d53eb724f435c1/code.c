// Your code here...
#include <stdio.h>

void print_mirrored_triangle(int N) {
    for (int i = 1; i <= N; i++) {  // Loop for each row
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
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
    print_mirrored_triangle(N);

    return 0;
}
