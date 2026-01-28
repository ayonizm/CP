#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100
#define NAME_LENGTH 50

// Structure to store customer account details
typedef struct
{
    int account_number;
    char name[NAME_LENGTH];
    double balance;
} Account;

// Array to manage multiple customer accounts
Account accounts[MAX_ACCOUNTS];
int account_count = 0;

// Function prototypes
void add_account();
void display_accounts();
void search_account();
void deposit_withdraw();
void save_to_file();
void load_from_file();
void menu();

int main()
{
    load_from_file();
    menu();
    return 0;
}

void menu()
{
    int choice;
    do
    {
        printf("\nBank Management System\n");
        printf("1. Add New Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit/Withdraw\n");
        printf("5. Save Accounts to File\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_account();
            break;
        case 2:
            display_accounts();
            break;
        case 3:
            search_account();
            break;
        case 4:
            deposit_withdraw();
            break;
        case 5:
            save_to_file();
            break;
        case 6:
            printf("Exiting...\n");
            save_to_file();
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);
}

void add_account()
{
    if (account_count >= MAX_ACCOUNTS)
    {
        printf("Account limit reached. Cannot add more accounts.\n");
        return;
    }

    Account new_account;
    printf("Enter account number: ");
    scanf("%d", &new_account.account_number);
    printf("Enter account holder name: ");
    scanf(" %[^]", new_account.name);
    printf("Enter initial balance: ");
    scanf("%lf", &new_account.balance);

    accounts[account_count++] = new_account;
    printf("Account added successfully!\n");
}

void display_accounts()
{
    if (account_count == 0)
    {
        printf("No accounts to display.\n");
        return;
    }

    printf("\nAccount Details:\n");
    printf("%-15s %-30s %-10s\n", "Account Number", "Name", "Balance");
    for (int i = 0; i < account_count; i++)
    {
        printf("%-15d %-30s %-10.2f\n", accounts[i].account_number, accounts[i].name, accounts[i].balance);
    }
}

void search_account()
{
    int choice;
    printf("Search by:\n1. Account Number\n2. Name\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int account_number;
        printf("Enter account number: ");
        scanf("%d", &account_number);

        for (int i = 0; i < account_count; i++)
        {
            if (accounts[i].account_number == account_number)
            {
                printf("Account found:\n");
                printf("Account Number: %d\nName: %s\nBalance: %.2f\n", accounts[i].account_number, accounts[i].name, accounts[i].balance);
                return;
            }
        }
    }
    else if (choice == 2)
    {
        char name[NAME_LENGTH];
        printf("Enter name: ");
        scanf(" %[^]", name);

        for (int i = 0; i < account_count; i++) {
            if (strcmp(accounts[i].name, name) == 0)
            {
                printf("Account found:\n");
                printf("Account Number: %d\nName: %s\nBalance: %.2f\n", accounts[i].account_number, accounts[i].name, accounts[i].balance);
                return;
            }
        }
    }
    else
    {
        printf("Invalid choice.\n");
        return;
    }

    printf("Account not found.\n");
}

void deposit_withdraw()
{
    int account_number;
    printf("Enter account number: ");
    scanf("%d", &account_number);

    for (int i = 0; i < account_count; i++)
    {
        if (accounts[i].account_number == account_number)
        {
            int choice;
            double amount;
            printf("1. Deposit\n2. Withdraw\nEnter choice: ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                accounts[i].balance += amount;
                printf("Amount deposited successfully!\n");
            }
            else if (choice == 2)
            {
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > accounts[i].balance)
                {
                    printf("Insufficient balance.\n");
                }
                else
                {
                    accounts[i].balance -= amount;
                    printf("Amount withdrawn successfully!\n");
                }
            }
            else
            {
                printf("Invalid choice.\n");
            }
            return;
        }
    }

    printf("Account not found.\n");
}

void save_to_file()
{
    FILE *file = fopen("accounts.dat", "wb");
    if (!file)
    {
        printf("Error saving to file.\n");
        return;
    }

    fwrite(&account_count, sizeof(account_count), 1, file);
    fwrite(accounts, sizeof(Account), account_count, file);
    fclose(file);
    printf("Accounts saved to file successfully.\n");
}

void load_from_file()
{
    FILE *file = fopen("accounts.dat", "rb");
    if (!file)
    {
        printf("No saved accounts found. Starting fresh.\n");
        return;
    }

    fread(&account_count, sizeof(account_count), 1, file);
    fread(accounts, sizeof(Account), account_count, file);
    fclose(file);
    printf("Accounts loaded from file successfully.\n");
}
