//3. Write a program to concatenate two strings.
#include <stdio.h>
int main() {
   char str1[100];
   char str2[100];
   int i = 0;
   int j = 0;
   printf("Enter the String1:");
   fgets(str1,sizeof(str1),stdin);
   printf("Enter the String2:");
    fgets(str2,sizeof(str2),stdin);
   while(str1[i]!='\0') {
       i++;
   }
   while(str2[j]!='\0') {
       str1[i] = str2[j];
       i++;
       j++;
   }
   str1[i] = '\0';
   printf("The final String is:%s",str1);
    return 0;
}