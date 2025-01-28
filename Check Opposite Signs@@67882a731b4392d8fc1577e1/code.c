#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   
   int a=10,b=20;
   if ((a>=0 && b<0) || (a<0 && b>=0))
   printf ("True");
   else
   printf("False");
   return 0;
}