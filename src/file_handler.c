#include <stdio.h>
#include <stdbool.h>
#include "../include/file_handler.h"
bool findAccount(int number, Account *result) { FILE *file = fopen(DATA_FILE, "rb"); Account account; if (!file) return false; while (fread(&account, sizeof account, 1, file) == 1) if (account.accountNumber == number) { *result = account; fclose(file); return true; } fclose(file); return false; }
bool appendAccount(const Account *account) { FILE *file = fopen(DATA_FILE, "ab"); bool ok; if (!file) return false; ok = fwrite(account, sizeof *account, 1, file) == 1; return fclose(file) == 0 && ok; }
static bool rewriteAccount(int number, const Account *replacement, bool deleting) { FILE *source = fopen(DATA_FILE, "rb"); FILE *temp = fopen("data/accounts.tmp", "wb"); Account current; bool found = false, ok = true; if (!source || !temp) { if (source) fclose(source); if (temp) fclose(temp); return false; } while (fread(&current, sizeof current, 1, source) == 1) { if (current.accountNumber == number) { found = true; if (deleting) continue; current = *replacement; } if (fwrite(&current, sizeof current, 1, temp) != 1) { ok = false; break; } } fclose(source); fclose(temp); if (!found || !ok || remove(DATA_FILE) != 0 || rename("data/accounts.tmp", DATA_FILE) != 0) { remove("data/accounts.tmp"); return false; } return true; }
bool replaceAccount(const Account *account) { return rewriteAccount(account->accountNumber, account, false); }
bool removeAccount(int number) { return rewriteAccount(number, NULL, true); }
