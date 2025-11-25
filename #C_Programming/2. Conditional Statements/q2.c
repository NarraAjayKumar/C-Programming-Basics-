//Write a program to check whether a number is positive, negative, or zero.
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0) {
        printf("Given number is Postive");
    }
    else if(n == 0){
        printf("Given number is Zero");
    }
    else {
        printf("Given number is negative");
    }
    return 0;
}