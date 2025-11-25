//3. Write a program to reallocate memory using realloc.
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,newsize;
    printf("Enter the initial size of Array:");
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
    printf("\nEnter the new size of Array:");
    scanf("%d",&newsize);
    arr = (int*)realloc(arr,newsize*sizeof(int)); // Reallocating memory using realloc
    if(arr == NULL)
 {
    printf("Memory allocation failed\n");
    return 1;
 }
    printf("Enter %d elements:\n",newsize);
for(int i = 0; i<newsize; i++) {
    scanf("%d",&arr[i]);
}
printf("The elements in the reallocated array are:\n");
for(int i =0; i<newsize; i++) {
    printf("%d ",arr[i]);
}
free(arr); // Freeing allocated memory
return 0;
}