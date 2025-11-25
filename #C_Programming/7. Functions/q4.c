//4. Write a function to find the largest number among three numbers
#include <stdio.h>
   void largest(int n1,int n2, int n3) {
       if(n1>n2 && n1>n3) {
           printf("n1 is the greatest: %d",n1);
       }
       else if(n2>n1 && n2>n3) {
           printf("n2 is the greatest: %d",n2);
       }
       else {
           printf("n3 is the greatest:%d",n3);
       }
      
   }
   int main() {
   int n1,n2,n3;
   printf("Enter the number1:");
   scanf("%d",&n1);
   printf("Enter the number2:");
   scanf("%d",&n2);
   printf("Enter the number3:");
   scanf("%d",&n3);
   largest(n1,n2,n3);

    return 0;
}