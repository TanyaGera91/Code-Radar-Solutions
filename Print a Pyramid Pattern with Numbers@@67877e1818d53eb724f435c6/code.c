#include <stdio.h>

void print_numeric_pyramid(int N) {
    for (int i = 1; i <= N; i++) {  // Loop for each row
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");  // Move to the next line
    }
}

int main() {
    int N;
    
    // Take input from user
  //  printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Function call
    print_numeric_pyramid(N);

    return 0;
}
