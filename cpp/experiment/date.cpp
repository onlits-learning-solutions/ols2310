#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    date inputDate;
    printf("Enter a date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &inputDate.day, &inputDate.month, &inputDate.year);
    printf("The entered date is %02d-%02d-%d.\n", inputDate.day, inputDate.month, inputDate.year);
    return 0;
}