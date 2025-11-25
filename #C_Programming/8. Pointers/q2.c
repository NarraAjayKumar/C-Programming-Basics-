//2. Write a program to swap two numbers using pointers.
#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
   int x,y;
   printf("Enter the value of X is:");
   scanf("%d",&x);
    printf("Enter the value of y is:");
   scanf("%d",&y);
   printf("Before swap x is: %d and y is: %d",x,y);
   printf("\n");
   swap(&x,&y);
   printf("After swap x is: %d and y is: %d",x,y);
}