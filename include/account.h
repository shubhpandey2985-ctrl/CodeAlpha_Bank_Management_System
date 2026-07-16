#ifndef ACCOUNT_H
#define ACCOUNT_H

typedef struct {
    int accountNumber;
    char holderName[50];
    char mobileNumber[15];
    char emailAddress[50];
    char accountType[20];
    float balance;
} Account;

void createAccount(void);
void viewAccountDetails(void);
void updateAccount(void);
void deleteAccount(void);
#endif
