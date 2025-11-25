//1. Write a program to find the length of a string.
#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int length;
    printf("Enter the String:");
    fgets(str,sizeof(str),stdin);
    length = strlen(str) - 1;
    printf("%d",length);

    return 0;
}