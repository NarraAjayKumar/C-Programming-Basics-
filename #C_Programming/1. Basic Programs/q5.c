//Write a program to calculate the area of a circle.
#include<stdio.h>
int main() {
    float radius,area;
    const float PI = 3.14;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    area = PI * radius * radius;
    printf("The area of the circle is: %2.f\n",area);
    return 0;
}