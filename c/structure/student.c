#include <stdio.h>
struct student
{
    int rollNo;
    char name[50];
    char class[10];
    char contactNo[11];
    char email[50];
};

int main(void)
{
    struct student students[5];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter roll no: ");
        scanf("%d%*c", &students[i].rollNo);
        printf("Enter name: ");
        scanf("%[^\n]", students[i].name);
        printf("Enter class: ");
        scanf("%s", students[i]);
        printf("Enter contact number: ");
        scanf("%s", contactNo[i]);
        printf("Enter email: ");
        scanf("%s", email[i]);
    }
    printf("%-10s%-20s%-10s%-15s%-20s\n", "Roll No", "Names", "Class", "Contact No", "Email");
    printf("-------------------------------------------------------------------\n");
    for (int i = 0; i < 2; i++)
        printf("%-10d%-20s%-10s%-15s%-20s\n", rollNo[i], names[i], class[i], contactNo[i], email[i]);
    return 0;
}