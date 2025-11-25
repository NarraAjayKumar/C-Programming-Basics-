//Write a program to find the sum of two floating numbers.
#include<stdio.h>
int main() {
    float num1,num2,sum;
    printf("Enter the first floating number:");
    scanf("%f",&num1);
    printf("Enter the second floating number:");
    scanf("%f",&num2);
    sum = num1 + num2;
    printf("The sum of %.2f and %.2f is: %.2f\n",num1,num2,sum);
    return 0;
}