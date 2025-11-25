//5.Write a program to use an array of structures.
#include<stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
    char grade[3];
};
int main() {
    struct Student s[3];
    for(int i = 0; i<3; i++) {
        printf("Enter details for Student %d:\n",i + 1);
        printf("Enter Student id:");
        scanf("%d",&s[i].id);
        printf("Enter Student name:");
        scanf("%s",s[i].name);
        printf("Enter Student marks:");
        scanf("%f",&s[i].marks);
        printf("Enter Student Grade:");
        scanf("%s",s[i].grade);
        printf("\n");
    }
    //display
    for(int i = 0; i<3; i++) {
     printf("Student %d:\n", i + 1);
        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
        printf("Grade: %s\n", s[i].grade);
    }
}