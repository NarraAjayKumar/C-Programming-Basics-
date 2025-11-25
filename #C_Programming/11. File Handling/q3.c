//3.Write a program to append text to an existing file.
#include<stdio.h>
int main() {
    FILE *fp;
    char str[100];
    // Opening the file in append mode
    fp = fopen("Example.txt", "a");
    if(fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    printf("Enter text to append to the file:\n");
    fgets(str,sizeof(str),stdin);
    fprintf(fp,"%s", str); // Appending text to the file
    fclose(fp); // Closing the file
    printf("Text appended to file successfully.\n");
    return 0;
    
}