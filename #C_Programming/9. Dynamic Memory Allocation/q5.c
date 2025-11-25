//5. Write a program to dynamically create a 2D array.
#include<stdio.h>
#include<stdlib.h>
int main() {
    int rows,cols;
    printf("Enter the rows:");
    scanf("%d",&rows);
    printf("Enter the cols:");
    scanf("%d",&cols);
    // Dynamically allocating memory for 2D array
    int **arr= (int**)malloc(rows * sizeof(int*));
    if(arr ==NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i = 0; i<rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
        if(arr ==NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    }
    printf("Enter the elements of the array:\n");
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++) {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("The elements in the 2D array are:\n");
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // Freeing allocated memory
    for(int i = 0; i<rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}   