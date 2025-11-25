//4.	Write a program to increment and decrement a variable.-> ++,--
#include<stdio.h>
int main () {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Original value: %d\n",a);
    printf("Value after incrementing by 1: %d\n",++a);
    printf("Value after decrementing by 1: %d\n",--a);
    return 0;
}