//5. Write a program to demonstrate pointer arithmetic.
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
     printf("\nPointer Arithmetic Demonstration:\n");
     printf("Value at p(arr[0]):%d\n",*p);
     printf("Value at p + 1 (arr[1]):%d\n",*(p + 1));
     printf("Value at p + 2 (arr[2]):%d\n",*(p + 2));
     p++;
     printf("After p++ (move forward):\n");
     printf("Now p points to = %d\n",*p);
     p--;
     printf("After p-- (move backward):\n");
     printf("Now p points to = %d\n",*p);
}