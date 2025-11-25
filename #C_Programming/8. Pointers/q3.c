//3. Write a program to demonstrate pointer to pointer.
#include<stdio.h>
int main() {
    int x = 20;
    int *p = &x;
    int **pp = &p;
    printf("Value of x is: %d\n",x);
    printf("Adress of x is: %p\n",&x);
    printf("Value of pointer p is: %p\n",p);
    printf("Value pointed to by p is: %d\n",*p);
    printf("Adress of pointer p is: %p\n",&p);
    printf("Value of pointer to pointer pp is: %d\n",**pp);
    printf("Adress of pointer to pointer pp is: %p\n",&pp);
    return 0;
}