//2. Write a program to allocate and initialize memory using calloc.
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    int *arr = (int*)calloc(n, sizeof(int)); // Allocating memory using calloc
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d elemnets:\n",n);
    for(int i = 0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("The elementd in memory are:\n");
    for(int i = 0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    free(arr); // Freeing allocated memory
    return 0;
}