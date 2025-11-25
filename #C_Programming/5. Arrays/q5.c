//5. Write a program to copy elements of one array to another.
#include<stdio.h>
int main () {
   int size;
   printf("Enter the size of Array:");
   scanf("%d",&size);
   int arr[size];
    int temp[size];
   printf("Enter the Array Elements:\n");
   for(int i = 0; i<size; i++) {
       scanf("%d",&arr[i]);
     
   }
   for(int i = 0; i<size; i++) {
           temp[i] = arr[i];
      printf("%d ",temp[i]);
   }
   
    return 0;
}