//1. Write a program to demonstrate pointer basics (declaring, initializing, and dereferencing).
#include<stdio.h>
int main() {
    int x = 10;
    int *p = &x; // Declaring and initializing pointer
    printf("Value of X is: %d\n",x);
    printf("Adress of X is: %p\n",&x);
    printf("Value of pointer p is: %p\n",p);
    printf("Value pointed to by p is: %d\n",*p); // Dereferencing pointer
    return 0;
}