//4. Write a program to free dynamically allocated memory using free
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int)); // Allocating memory using malloc
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d elements:\n",n);
    for(int i = 0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are:\n");
    for(int i = 0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    free(arr); // Freeing allocated memory
    printf("\nMemory freed successfully.\n");
    return 0;
 }