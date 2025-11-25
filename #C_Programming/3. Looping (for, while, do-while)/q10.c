//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
   int n,first = 0, second = 1,next;
   printf("Enter the number:");
   scanf("%d",&n);
   printf("Series is:");
  for(int i = 1; i<=n; i++) {
      printf("%d",first);
      next = first + second;
      first = second;
      second = next;
  }

    return 0;
}