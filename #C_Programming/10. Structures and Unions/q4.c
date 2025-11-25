//4.Write a program to demonstrate a union and show how memory is shared.
#include<stdio.h>
union data {
    int x;
    float y;
    char z;
};
int main() {
    union data d;
    d.x = 10;
    printf("After assigining integer value:\n");
    printf("d.x = %d\n",d.x);
    d.y = 20.5;
    printf("After assigining float value:\n");
    printf("d.y = %.2f\n",d.y);
    d.z = 'A';
    printf("After assigining char value:\n");           
    printf("d.z = %c\n",d.z);
    printf("Current values of union members:\n");
    printf("d.x = %d\n",d.x); // May print garbage value
    printf("d.y = %.2f\n",d.y); // May print garbage value
    printf("d.z = %c\n",d.z);
    return 0;
}