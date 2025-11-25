//8. Write a program for binary search
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
   int st = 0,ei = size - 1;
   printf("Enter the key Element:");
   scanf("%d",&key);
   
       while(st<=ei) {
           int mid = (st + ei)/2;
           if(arr[mid] == key) {
               printf("key found at idex:%d",mid);
               flag = 1;
               break;
           }
           if(arr[mid]>key) {
            ei = mid - 1;
           }
           else {
                st = mid + 1;
           }
       }
   if(flag == 0) {
       printf("Key not Found !");
   }
   
    return 0;
}