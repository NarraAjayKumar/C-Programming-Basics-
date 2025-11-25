//Write a program to find the largest among three numbers.
#include<stdio.h>
int main() {
    int n1,n2,n3;
    printf("Enter a number:");
    scanf("%d",&n1);
     printf("Enter a number:");
    scanf("%d",&n2);
     printf("Enter a number:");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3) {
        printf("n1 is the largest: %d",n1);
    }
    else if(n2>n1 && n2>n3){
        printf("n2 is the largest: %d",n2);
    }
    else {
        printf("n3 is the largest: %d",n3);
    }
    return 0;
}