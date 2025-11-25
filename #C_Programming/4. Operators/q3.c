//3.	Write a program to demonstrate logical operators.-> &&,||,!
#include<stdio.h>
int main () {
    int a, b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    printf("Logical AND (a > 0 && b > 0): %d\n",(a > 0 && b > 0));
    printf("Logical OR (a > 0 || b > 0): %d\n",(a > 0 || b > 0));
    printf("Logical NOT (!(a > 0)): %d\n",!(a > 0));
    return 0;
}