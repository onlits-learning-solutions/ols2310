#include <stdio.h>
typedef struct student
{
    int rollNo;
    char name[50];
    char class[10];
    char contactNo[11];
    char email[50];
} STUDENT;

void read(STUDENT students[]);
void show(STUDENT students[]);
// STUDENT students[5];

int main(void)
{
    STUDENT students[5];
    // STUDENT *s;
    // printf("%d\n", sizeof(s));
    read(students);
    show(students);
    return 0;
}

void read(STUDENT students[])
{
    for (int i = 0; i < 2; i++)
    {
        printf("Enter roll no: ");
        scanf("%d%*c", &students[i].rollNo);
        printf("Enter name: ");
        scanf("%[^\n]", students[i].name);
        printf("Enter class: ");
        scanf("%s", students[i].class);
        printf("Enter contact number: ");
        scanf("%s", students[i].contactNo);
        printf("Enter email: ");
        scanf("%s", students[i].email);
    }
}

void show(STUDENT students[])
{
     printf("%-10s%-20s%-10s%-15s%-20s\n", "Roll No", "Names", "Class", "Contact No", "Email");
    printf("-------------------------------------------------------------------\n");
    for (int i = 0; i < 2; i++)
        printf("%-10d%-20s%-10s%-15s%-20s\n", students[i].rollNo, students[i].name, students[i].class, students[i].contactNo, students[i].email);
}