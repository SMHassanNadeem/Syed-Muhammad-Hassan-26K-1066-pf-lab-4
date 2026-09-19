#include <stdio.h>

int main()
{
    float shoppingAmount, distance, deliveryCharges, total;

    printf("Enter shopping amount: ");
    scanf("%f", &shoppingAmount);

    printf("Enter delivery distance in km: ");
    scanf("%f", &distance);

    if (shoppingAmount <= 0 || distance <= 0)
    {
        printf("Invalid Input");
    }
    else
    {
        if (shoppingAmount >= 5000)
        {
            deliveryCharges = 0;
        }
        else if (distance <= 5)
        {
            deliveryCharges = 150;
        }
        else if (distance <= 10)
        {
            deliveryCharges = 250;
        }
        else if (distance <= 20)
        {
            deliveryCharges = 400;
        }
        else
        {
            deliveryCharges = 600;
        }

        total = shoppingAmount + deliveryCharges;

        printf("\nShopping Amount: Rs. %.2f\n", shoppingAmount);
        printf("Delivery Charges: Rs. %.2f\n", deliveryCharges);
        printf("Total Payable Amount: Rs. %.2f\n", total);
    }

    return 0;
}