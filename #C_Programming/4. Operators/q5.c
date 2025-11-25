//5.	Write a program to find the remainder without using the modulus operator.
#include<stdio.h>
int main () {
    int a,b,r;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    r = a - (a/b)*b;
    return 0;
}