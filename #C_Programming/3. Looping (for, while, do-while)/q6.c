//Write a program to reverse a number.
#include<stdio.h>
int main() {
    int n,rev = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    printf("Reversed number is %d\n",rev);

    return 0;
}