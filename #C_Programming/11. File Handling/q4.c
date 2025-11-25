//4.Write a program to copy content from one file to another.
#include<stdio.h>
int main() {
    FILE *source, *destination;
    int ch;
    // Opening source file in read mode
    source = fopen("Example.txt", "r");
    if(source == NULL) {
        printf("Error opening source file\n");
        return 1;
    }
    // Opening destination file in write mode
    destination = fopen("Copy.txt", "w");
    if(destination == NULL) {   
        printf("Error opening destination file\n");
        fclose(source);
        return 1;
    }   
    // Copying content from source to destination
    while((ch = fgetc(source)) != EOF) {
        fputc(ch,destination);
    }
    printf("File copied successfully.\n");
    // Closing both files
    fclose(source);
    fclose(destination);
    return 0;
}