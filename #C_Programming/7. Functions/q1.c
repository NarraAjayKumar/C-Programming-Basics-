//1. Write a function to find the factorial of a number.
#include <stdio.h>
   void fact(int n) {
       int fact = 1;
       for(int i = 1; i<=n; i++) {
           fact = fact * i;
       }
       printf("%d",fact);
   }
   int main() {
   int n;
   printf("Enter the number:");
   scanf("%d",&n);
   fact(n);

    return 0;
}