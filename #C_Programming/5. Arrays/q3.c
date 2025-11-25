//3. Write a program to find the maximum and minimum element in an array.
#include<stdio.h>
int main () {
   int size;
   printf("Enter the size of Array:");
   scanf("%d",&size);
   int arr[size];
   printf("Enter the Array Elements:\n");
   for(int i = 0; i<size; i++) {
       scanf("%d",&arr[i]);
   }
   int min = arr[0];
   int max = arr[0];
   //display
   for(int i = 1; i<size; i++) {
       if(arr[i]>max) {
           max = arr[i];
       }
       if(arr[i]<min) {
          min = arr[i];
       }
   }
   printf("Maximum is:%d\n",max);
   printf("Minimum is:%d",min);
    return 0;
}