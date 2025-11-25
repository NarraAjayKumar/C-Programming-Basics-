//Write a program to check whether a year is a leap year or not.
#include<stdio.h>
int main() {
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    
    if(year%4 == 0 && year%100 != 0) {
        printf("It is leap year");
    }
    else if(year%400 == 0){
        printf("It is leap year");
    }
    else {
        printf("It is not leap year");
    }
    return 0;
}