#include <stdio.h>
#define SIZE 25
int main(void)
{
    int arr[SIZE], value, count = 0;
    printf("Enter %d integers below:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &value);

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == value)
        {
            count++;
        }
    }
    if (count == 0)
        printf("%d not found in the array.\n", value);
    else
        printf("%d was found %d time(s) in the array.\n", value, count);
    return 0;
}