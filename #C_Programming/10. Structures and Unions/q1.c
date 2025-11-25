//1.Write a program to define and access a structure.
#include<stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
    char grade;
};
int main() {
   struct Student s;
   printf("Enter Student ID: ");
   scanf("%d", &s.id);
    printf("Enter Student Name: ");
    scanf("%s", s.name);
    printf("Enter Student Marks: ");
    scanf("%f", &s.marks);
    printf("Enter student Grade: ");
    scanf(" %c", &s.grade);
    printf("\nStudent Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);
    return 0;
}
