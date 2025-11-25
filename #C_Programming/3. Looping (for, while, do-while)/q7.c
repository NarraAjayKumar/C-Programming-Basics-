//Write a program to check whether a number is palindrome or not.
#include<stdio.h>
int main() {
    int n,rev = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    int orginal = n;
        while(n!=0) {
        int digit = n%10;
        rev = (rev * 10) + digit;
        n = n/10;
        }
    if(rev == orginal) {
        printf("Given number is palindrome");
    }
    else {
        printf("Given number is not palindrome");
    }

    return 0;
}