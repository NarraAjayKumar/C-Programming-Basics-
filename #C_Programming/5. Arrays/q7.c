//7.Write a program to search an element in an array (Linear Search).

#include<stdio.h>
int main () {
   int size,flag = 0;
   printf("Enter the size of Array:");
   scanf("%d",&size);
   int arr[size];
   printf("Enter the Array Elements:\n");
   for(int i = 0; i<size; i++) {
       scanf("%d",&arr[i]);
   }
   int key;
   printf("Enter the key Element:");
   scanf("%d",&key);
   for(int i = 0; i<size; i++) {
       if(arr[i] == key) {
           printf("Element found at index: %d\n", i);
           flag = 1;
           break;
       }
       
       
   }
   if(flag == 0) {
           printf("Element not Found!");
   }
   
    return 0;
}