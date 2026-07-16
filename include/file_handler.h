#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H
#include <stdbool.h>
#include "account.h"
#define DATA_FILE "data/accounts.dat"
bool findAccount(int accountNumber, Account *account);
bool appendAccount(const Account *account);
bool replaceAccount(const Account *account);
bool removeAccount(int accountNumber);
#endif
