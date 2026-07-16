#include <stdio.h>
#include "include/account.h"
#include "include/transaction.h"
#include "include/utils.h"

int main(void) {
    for (;;) {
        int choice;
        printMainMenu();
        choice = readInt("Enter your choice: ");
        switch (choice) {
            case 1: createAccount(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: balanceEnquiry(); break;
            case 5: viewAccountDetails(); break;
            case 6: updateAccount(); break;
            case 7: deleteAccount(); break;
            case 8: puts("\nThank you for using Bank Management System."); return 0;
            default: puts("Invalid menu selection. Please choose 1 to 8.");
        }
    }
}
