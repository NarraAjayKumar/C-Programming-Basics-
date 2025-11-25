//Write a program to calculate the grade of a student based on marks.
#include<stdio.h>
int main() {
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks>90 && marks<=100) {
        printf("O grade");
    }
    else if(marks>80 && marks<=90) {
        printf("A grade");
    }
    else if(marks>70 && marks<=80) {
        printf("B grade");
    }
    else if(marks>60 && marks<=70) {
        printf("B+ grade");
    }
    else if(marks>50 && marks<=60) {
        printf("C grade");
    }
    else if(marks>34 && marks<=50) {
        printf("Pass");
    }
    else {
        printf("Fail");
    }
    return 0;
}