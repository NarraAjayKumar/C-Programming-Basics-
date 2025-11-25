//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
   int n,sum = 0;
   printf("Enter the number:");
   scanf("%d",&n);
   while(n!=0) {
       int digit = n % 10;
       sum = sum + digit;
       n = n/10;
   }
   printf("%d",sum);

    return 0;
}