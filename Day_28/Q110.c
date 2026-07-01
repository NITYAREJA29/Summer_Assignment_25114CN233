#include <stdio.h>

int main()
{
    int choice;
    float balance = 0, amount;

    while(1)
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                balance += amount;
                printf("Amount deposited successfully!\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Amount withdrawn successfully!\n");
                }
                else
                {
                    printf("Insufficient balance!\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}