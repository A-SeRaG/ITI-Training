#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bank_amunt = 50000;
    int deposit_value, withdrawl_value, choice;

    printf("Welcome to our bank system\nPlease choose the operation\n");
    printf("---------------------------------\n");
    printf("for Deposit enter--------> 1\n");
    printf("for withdrawl enter------> 2\n");
    printf("for check balance enter--> 3\n");
    printf("---------------------------------\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter Deposit value\n");
        scanf("%d", &deposit_value);
        printf("The new balance is %d", bank_amunt + deposit_value);
    }
    else if (choice == 2)
    {
        printf("Enter withdrawl value\n");
        scanf("%d", &withdrawl_value);
        if (withdrawl_value > bank_amunt)
            printf("The balance cann't be negative\n");
        else
            printf("The new balance is %d", bank_amunt - withdrawl_value);
    }
    else if (choice == 3)
        printf("Your balance is %d", bank_amunt);
    else
        printf("Sorry you enter wronge number");

    return (0);
}