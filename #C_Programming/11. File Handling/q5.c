//5.Write a program to count the number of characters, words, and lines in a file.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;  // flag to track if inside a word

    // Open the file in read mode
    fp = fopen("Example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        charCount++;          // Count every character

        if (ch == '\n')       // Count lines
            lineCount++;

        if (isspace(ch))      // If whitespace, we leave the word
            inWord = 0;
        else if (!inWord) {   // Start of a new word
            inWord = 1;
            wordCount++;
        }
    }

    fclose(fp);

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    return 0;
}
