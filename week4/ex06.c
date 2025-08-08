#include <stdio.h>
int main()
{
    int option,dp,wd;
    int m = 0;

    do
    {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n ");
        printf("2. Deposit Money\n ");
        printf("3. Withdraw Money\n ");
        printf("4. Exit\n ");
        printf("Choose an option:");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
            printf("Your current balance: %d\n",m);
            break;

            case 2:
            printf("Enter amout to deposit: ");
            scanf("%d",&dp);
            m = m + dp;
            break;

            case 3:
            printf("Enter amout to withdraw: ");
            scanf("%d",&wd);
            m = m - wd;
            break;

            case 4:
            printf("Thank you for using the ATM");
            break;
        }
        

    }
    while(option != 4);
}