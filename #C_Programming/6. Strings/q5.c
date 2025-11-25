//5. Write a program to reverse a string.
#include <stdio.h>
int main() {
   char str[100];
   int i, len = 0;
   printf("Enter the String:");
   fgets(str,sizeof(str),stdin);
   
   for(i = 0; str[i]!='\0';i++) {
       if(str[i] == '\n') {
           str[i] = '\0';
           break;
       }
   }
   for(i = 0;str[i]!='\0';i++) {
      len++;
  }
  printf("The reversed String is:");
   for(i = len - 1;i>=0; i--) {
       printf("%c",str[i]);
   }
    return 0;
}