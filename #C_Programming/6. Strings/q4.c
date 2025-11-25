//4. Write a program to compare two strings
#include <stdio.h>
int main() {
   char str1[100];
   char str2[100];
   int i;
   int flag = 1;
   printf("Enter the String1:");
   fgets(str1,sizeof(str1),stdin);
   printf("Enter the String2:");
    fgets(str2,sizeof(str2),stdin);
   for(i = 0; str1[i]!='\0';i++) {
       if(str1[i] == '\n') {
           str1[i] = '\0';
           break;
       }
   }
   for(i = 0; str2[i]!='\0';i++) {
       if(str2[i] == '\n') {
           str2[i] = '\0';
           break;
       }
   }
   for(i = 0;str1[i]!='\0'||str2[i]!='\0';i++) {
       if(str1[i]!=str2[i]) {
           flag = 0;
           break;
       }
   }
   if(flag == 0) {
       printf("Strings are not equal!");
   }
   else {
       printf("String are equal!");
   }
    return 0;
}