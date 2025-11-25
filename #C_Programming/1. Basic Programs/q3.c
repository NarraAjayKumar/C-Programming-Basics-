//Write a program to swap two numbers using a temporary variable.
#include<stdio.h>
int main() {
    int num1,num2,temp;
    printf("Enter the number1:");
    scanf("%d",&num1);
    printf("Enter the number2:");
    scanf("%d",&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping,number1: %d\n",num1);
    printf("After sapping,number2: %d\n",num2);
    return 0;
}