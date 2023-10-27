#include <stdio.h>

int main(void)
{
    int l, b, a;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter breadth: ");
    scanf("%d", &b);
    a = l * b;
    printf("The area is %d.\n", a);
    return 0;
}