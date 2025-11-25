//1.Write a program to create a file and write text to it.
#include<stdio.h>
int main() {
    FILE *fp;
    char str[100];
    // Creating and opening a file in write mode
    fp =fopen("Example.txt", "w");
    if(fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    printf("Enter text to write to the file:\n");
    fgets(str,sizeof(str),stdin);
    fprintf(fp, "%s", str); // Writing text to the filef
    fclose(fp); // Closing the file
    printf("Text written to file successfully.\n");
    return 0;
}