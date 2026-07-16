#include <stdio.h>
#include "../include/account.h"
#include "../include/file_handler.h"
#include "../include/transaction.h"
#include "../include/utils.h"
void depositMoney(void) { Account a; int n = readInt("\nAccount Number: "); if (!findAccount(n, &a)) { puts("Account not found."); return; } a.balance += readPositiveAmount("Deposit Amount: "); printf(replaceAccount(&a) ? "Deposit successful. New balance: %.2f\n" : "File write error.\n", a.balance); }
void withdrawMoney(void) { Account a; float amount; int n = readInt("\nAccount Number: "); if (!findAccount(n, &a)) { puts("Account not found."); return; } amount = readPositiveAmount("Withdrawal Amount: "); if (amount > a.balance) { puts("Insufficient Balance."); return; } a.balance -= amount; printf(replaceAccount(&a) ? "Withdrawal successful. New balance: %.2f\n" : "File write error.\n", a.balance); }
void balanceEnquiry(void) { Account a; if (!findAccount(readInt("\nAccount Number: "), &a)) { puts("Account not found."); return; } printf("\nAccount Number : %d\nAccount Holder : %s\nAccount Type   : %s\nCurrent Balance: %.2f\n", a.accountNumber, a.holderName, a.accountType, a.balance); }
