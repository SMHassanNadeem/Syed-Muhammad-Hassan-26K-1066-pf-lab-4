#include <stdio.h>

int main() {
    float balance, amount;

    printf("Enter available balance: ");
    scanf("%f", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    if(balance > 0 && balance > amount){
        printf("Withdrawal Approved\n");
    }
    else{
        printf("Withdrawal Denied\n");
    }
    return 0;
}
