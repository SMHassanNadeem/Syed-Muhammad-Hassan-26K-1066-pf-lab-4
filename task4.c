#include <stdio.h>

int main()
{
    int category, item;

    printf("1. Fast Food\n");
    printf("2. Pakistani Food\n");
    printf("3. Drinks\n");

    printf("Enter category choice: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("\n1. Burger\n");
            printf("2. Pizza\n");
            printf("3. Fries\n");

            printf("Enter item number: ");
            scanf("%d", &item);

            if (item == 1)
            {
                printf("You selected: Burger");
            }
            else if (item == 2)
            {
                printf("You selected: Pizza");
            }
            else if (item == 3)
            {
                printf("You selected: Fries");
            }
            else
            {
                printf("Invalid Item Choice");
            }

            break;

        case 2:
            printf("\n1. Biryani\n");
            printf("2. Karahi\n");
            printf("3. Nihari\n");

            printf("Enter item number: ");
            scanf("%d", &item);

            if (item == 1)
            {
                printf("You selected: Biryani");
            }
            else if (item == 2)
            {
                printf("You selected: Karahi");
            }
            else if (item == 3)
            {
                printf("You selected: Nihari");
            }
            else
            {
                printf("Invalid Item Choice");
            }

            break;

        case 3:
            printf("\n1. Coke\n");
            printf("2. Pepsi\n");
            printf("3. Juice\n");

            printf("Enter item number: ");
            scanf("%d", &item);

            if (item == 1)
            {
                printf("You selected: Coke");
            }
            else if (item == 2)
            {
                printf("You selected: Pepsi");
            }
            else if (item == 3)
            {
                printf("You selected: Juice");
            }
            else
            {
                printf("Invalid Item Choice");
            }

            break;

        default:
            printf("Invalid Category Choice");
    }

    return 0;
}