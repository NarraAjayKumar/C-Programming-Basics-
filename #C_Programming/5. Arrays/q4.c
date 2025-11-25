//4. Write a program to count even and odd numbers in an array.
#include<stdio.h>
int main () {
   int size,even = 0,odd = 0;
   printf("Enter the size of Array:");
   scanf("%d",&size);
   int arr[size];
   printf("Enter the Array Elements:\n");
   for(int i = 0; i<size; i++) {
       scanf("%d",&arr[i]);
   }
   for(int i = 0; i<size; i++) {
       if(arr[i]%2 == 0) {
           even = even + 1;
       }
       if(arr[i]%2!=0) {
          odd = odd + 1;
       }
   }
   printf("Even is:%d\n",even);
   printf("Odd is:%d",odd);
    return 0;
}