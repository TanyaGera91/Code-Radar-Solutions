#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
  int ch;
  scanf("%c",&ch);
  if (ch=='A')
    printf("Excellent");
 if (ch=='B')
    printf("Good");
     if (ch=='C')
    printf("Average");
     if (ch=='D')
    printf("Below Average");
     if (ch=='F')
    printf("Fail");

}