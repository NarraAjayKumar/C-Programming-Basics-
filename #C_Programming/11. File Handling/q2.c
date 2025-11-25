//2.Write a program to read text from a file.
#include<stdio.h>
int main() {
    FILE *fp;
    char str[100];
    // Opening the file in read mode
    fp = fopen("Example.txt","r");
    if(fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    printf("Content of the file:\n");
    fgets(str,sizeof(str),fp); // Reading text from the file
    printf("%s",str); // Displaying the read text   
    fclose(fp); // Closing the file
    return 0;
    
}