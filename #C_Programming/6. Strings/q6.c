//6. Write a program to count vowels, consonants, digits, and spaces in a string
#include <stdio.h>
int main() {
   char str[100];
   int i, consonant = 0,vowel = 0,digit = 0, spaces = 0;
   printf("Enter the String:");
   fgets(str,sizeof(str),stdin);
   
   for(i = 0; str[i]!='\0';i++) {
      char ch = str[i];
      if(ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
          vowel = vowel + 1;
      }
      else if(ch >= '0' && ch <= '9') {
          digit = digit + 1;
      }
      else if(ch == ' ') {
          spaces = spaces + 1;
      }
      else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
      consonant = consonant + 1;
   }
   printf("Vowels is: %d\n",vowel);
   printf("consotant is: %d\n",consonant);
   printf("digit is: %d\n",digit);
   printf("spaces is: %d\n",spaces);
    return 0;
}