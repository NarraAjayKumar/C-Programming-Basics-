//Write a program to convert Celsius to Fahrenheit.
#include<stdio.h>
int main() {
    float celsius,fahrenheit;
    printf("Enter temperature in Celsius:");
    scanf("%f",&celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %2.f\n", fahrenheit);
    return 0;
}