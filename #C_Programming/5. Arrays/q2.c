//2.	Write a program to find the sum of array elements.
#include<stdio.h>
int main () {
   int size,sum =0;
   printf("Enter the size of Array:");
   scanf("%d",&size);
   int arr[size];
   printf("Enter the Array Elements:\n");
   for(int i = 0; i<size; i++) {
       scanf("%d",&arr[i]);
   }
   //display
   for(int i = 0; i<size; i++) {
       sum = sum + arr[i];
   }
   printf("Sum is:%d",sum);
    return 0;
}