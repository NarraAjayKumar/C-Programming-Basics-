//2.Write a program to initialize a structure and display its members.
#include<stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
    char grade;
};
int main() {
    struct Student s = {1530, "Ajay", 100, 'O' }; // Initializing structure
    printf("Student Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);
    return 0;    
}