//1.	Write a program to store and display elements of an array.
#include<stdio.h>
int main () {
    int size;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of Array:\n");
    for(int i = 0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Array Elements is:");
    for(int i = 0; i<size; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}