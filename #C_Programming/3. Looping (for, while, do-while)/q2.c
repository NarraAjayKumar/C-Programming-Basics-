//Write a program to find the sum of first N natural numbers.
#include<stdio.h>
int main() {
    int n,sum = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i = 0; i<=n; i++) {
        sum = sum + i;
    }
    printf("Sum n natural number is:%d",sum);
    return 0;
}