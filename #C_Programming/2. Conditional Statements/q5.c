//Write a program to check whether a character is a vowel or consonant.
#include<stdio.h>
int main() {
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Given character is vowel");
    }
    else {
        printf("Given character is consonant.");
    }
    return 0;
}