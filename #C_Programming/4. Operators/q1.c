//1.	Write a program to demonstrate the use of arithmetic operators.
#include<stdio.h>
int main () {
    int a, b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    printf("Addition:%d\n",a + b);
    printf("Subtraction:%d\n",a - b);
    printf("Multiplication:%d\n",a * b);
    printf("Division:%d\n",a / b);
    printf("Modulus:%d\n",a % b);
    return 0;
}