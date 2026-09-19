#include <stdio.h>

int main()
{
    int choice;

    printf("--- Restaurant Menu ---\n");
    printf("1. Burger\n");
    printf("2. Pizza\n");
    printf("3. Biryani\n");
    printf("4. Sandwich\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Burger");
        break;
    case 2:
        printf("Selected: Pizza\n");
        break;
    case 3:
        printf("Selected: Biryani\n");
        break;
    case 4:
        printf("Selected: Sandwich\n");
        break;
    default:
        printf("Invalid Choice\n");
    }

    return 0;
}