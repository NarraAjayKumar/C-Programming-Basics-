//4. Write a program to access array elements using pointers.
#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    int arr[n];
    int *p = arr;//
    printf("Enter %d elements:\n");
    for(int i = 0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("\nAcessing array elements using pointers:");
    for(int i = 0; i<n; i++) {
        printf(" %d",*(p + i));
    }
}