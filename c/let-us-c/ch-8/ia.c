#include <stdio.h>
#define SIZE 10

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int rev[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        rev[i] = arr[SIZE - 1 - i];
    }
    printf("The contents of second array are:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", rev[i]);
    }
    return 0;
}