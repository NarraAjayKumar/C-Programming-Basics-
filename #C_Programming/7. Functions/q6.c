//6. Write a function to swap two numbers using call by reference
#include <stdio.h>
   void swap(int *n1, int *n2) {
       int temp = *n1;
       *n1 = *n2;
       *n2 = temp;
   }
   int main() {
   int n1,n2;
   printf("Enter the number1:");
   scanf("%d",&n1);
   printf("Enter the number2:");
   scanf("%d",&n2);
   printf("Before swap n1 is :%d\n",n1);
   printf("Before swap n2 is :%d\n",n2);
   swap(&n1,&n2);
   printf("After swap n1 is:%d\n",n1);
   printf("After swap n2 is:%d\n",n2);

    return 0;
}