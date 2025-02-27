#include <stdio.h>

void print_alternating_binary_triangle(int N) {
    for (int i = 1; i <= N; i++) {  // Loop for each row
        int num = i % 2; // Start with 1 if row is odd, 0 if even
        
        for (int j = 1; j <= i; j++) {  // Loop for each column
            printf("%d ", num);
            num = 1 - num;  // Toggle between 1 and 0
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
    print_alternating_binary_triangle(N);

    return 0;
}
