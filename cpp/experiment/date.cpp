#include <stdio.h>
int main(void)
{
    int day, month, year;
    printf("Enter a date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &day, &month, &year);
    printf("The entered date is %02d-%02d-%d.\n", day, month, year);
    return 0;
}