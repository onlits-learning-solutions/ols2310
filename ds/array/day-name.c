#include <stdio.h>
int main(void)
{
    int n;
    char names[][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n >= 1 && n <= 7)
        printf("%s\n", names[n - 1]);
    else
        printf("Invalid Input\n");
    return 0;
}

//Time complexity f(1)
//Space complexity f(1)