#include <stdio.h>
#include <stdlib.h>

struct customer{
int acc_num;
char name[10];
int balance;
int atm_pin;
};
void create_account(struct customer *,int);
void balance(struct customer*,int);
void deposit(struct customer*,int);
void withdrawal(struct customer*,int);

int main()
{
int customers;
printf("Enter the number of customers\n");
scanf("%d",&customers);

struct customer c[customers];
create_account(c,customers);

while(1)
{
    int choice;
    printf(" 1) Balance Report\n 2) Deposit\n 3) Withdrawal\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch (choice) {
    case 1:
        balance(c,customers);
        break;
    case 2:
        deposit(c,customers);
        break;
    case 3:
        withdrawal(c,customers);
        break;
    default:
        printf("Invalid input\n");
        exit(0);
    }
}
return 0;
}

void create_account(struct customer *c,int customers)
{
int i;
printf("Customer Details:\n");
    for(i=0;i<customers;i++)
    {
        printf("Enter the name of Customer\n");
        scanf("%s",c[i].name);

        printf("Enter the account number\n");
        scanf("%d",&c[i].acc_num);

        printf("Enter the balance in account\n");
        scanf("%d",&c[i].balance);

        printf("Enter the atm_pin\n");
        scanf("%d",&c[i].atm_pin);

    }
}

void balance(struct customer *c,int customers)
{
    int i,acc_pin;
    printf("Enter the atm pin of customer to display Balance\n");
    scanf("%d",&acc_pin);
    for(i=0;i<customers;i++)
    {
        if(acc_pin==c[i].atm_pin)
        {
            printf(" Name=%s\n Balance=%d\n",c[i].name,c[i].balance);
            break;
        }
    }
}

void deposit(struct customer *c,int customers)
{
    int i,account,amount;
    printf("Enter the account number of customer to deposit amount\n");
    scanf("%d",&account);
    for(i=0;i<customers;i++)
    {
        if(account==c[i].acc_num)
        {
            printf("Enter the amount to be deposited\n");
            scanf("%d",&amount);
            printf("%d deposited to account %d successfully\n",amount,c[i].acc_num);
            c[i].balance+=amount;
            printf("The current balance is %d\n",c[i].balance);
            break;
        }
    }
}

void withdrawal(struct customer *c,int customers)
{
    int i,acc_pin,amount;
    printf("Enter the atm pin of customer to withdraw amount from\n");
    scanf("%d",&acc_pin);
    for(int i=0;i<customers;i++)
    {
        if(acc_pin==c[i].atm_pin)
        {
            printf("Enter the amount to be withdrawn\n");
            scanf("%d",&amount);
            if(c[i].balance<=100)
            {
                printf("Minimum balance present!!\n");
            }
            else if(amount>c[i].balance)
            {
                printf("Balance insufficient to be withdrawn from account %d\n",c[i].acc_num);
            }
            else
            {
                printf("Amount %d withdrawn from account %d\n",amount,c[i].acc_num);
                c[i].balance-=amount;
                printf("Current balance is %d\n",c[i].balance);
            }
        }
    }

}

