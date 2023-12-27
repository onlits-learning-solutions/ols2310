#include <stdio.h>

int main(void)
{
    printf("%100s\n", "ARRAY OPERATIONS!");

    for (int i = 1; i <= 184; i++)
        printf("+");
    printf("\n");

    mainMenu();
    return 0;
}

void mainMenu(void)
{
    int ch;
    do
    {
        printf("MAIN MENU\n");
        printf("---------\n");
        printf("1. Display Array (Traversal).\n");
        printf("\nEnter choice (0 to exit): ");
        scanf("%d", &ch);
    } while (ch != 0);

    switch (ch)
    {
    case 0:
        printf("Bye!\n");
        break;
    case 1:
        display();
        break;
    default:
        printf("\nInvalid option!\n\n");
    }
}

void display(void)
{

}