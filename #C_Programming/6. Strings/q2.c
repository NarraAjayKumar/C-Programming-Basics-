//2.	Write a program to copy one string into another.
#include <stdio.h>
int main() {
    char source[100];
    char destation[100];
    int i;
    printf("Enter the Character:");
    fgets(source,sizeof(source),stdin);
    for(i = 0; source[i]!='\0'; i++) {
        destation[i] = source[i];
    }
    destation[i] = '\0';
    printf("The destation is:%s",destation);

    return 0;
}