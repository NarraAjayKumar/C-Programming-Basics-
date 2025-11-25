//3. Write a function to check whether a number is prime.
#include <stdio.h>
   void prime(int n) {
       int flag = 1;
       if(n<=1) {
           flag = 0;
       }
       else {
       for(int i = 2; i * i <= n; i++) {
           if(n % i == 0) {
               flag = 0;
               break;
           }
       }
       if(flag == 1) {
           printf("Given number is prime number");
       }
       else {
           printf("Given number is not a prime number");
       }
       }
      
   }
   int main() {
   int n;
   printf("Enter the number:");
   scanf("%d",&n);
   prime(n);

    return 0;
}