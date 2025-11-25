//2.	Write a program to demonstrate relational operators.-> ==,!=,<,>,<=,>=
#include<stdio.h>
int main () {
    int a, b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    printf("a == b: %d\n",a == b);
    printf("a != b: %d\n",a != b);
    printf("a > b: %d\n",a > b);
    printf("a < b: %d\n",a < b);
    printf("a >= b: %d\n",a >= b);
    printf("a <= b: %d\n",a <= b);
    return 0;
}