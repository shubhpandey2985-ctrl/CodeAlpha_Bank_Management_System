#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/utils.h"
void printMainMenu(void) { puts("\n========================================\n        BANK MANAGEMENT SYSTEM\n========================================\n1. Create Account\n2. Deposit Money\n3. Withdraw Money\n4. Balance Enquiry\n5. View Account Details\n6. Update Account\n7. Delete Account\n8. Exit\n========================================"); }
void readLine(const char *prompt, char *value, size_t size) { size_t n; for (;;) { printf("%s", prompt); if (!fgets(value, (int)size, stdin)) { clearerr(stdin); continue; } n = strcspn(value, "\n"); if (value[n] == '\n') value[n] = '\0'; else { int c; while ((c = getchar()) != '\n' && c != EOF) {} } if (*value) return; puts("This field cannot be empty."); } }
int readInt(const char *prompt) { char value[64], *end; long n; for (;;) { readLine(prompt, value, sizeof value); n = strtol(value, &end, 10); if (!*end) return (int)n; puts("Enter a valid whole number."); } }
static float readAmount(const char *prompt, int allowZero) { char value[64], *end; float amount; for (;;) { readLine(prompt, value, sizeof value); amount = strtof(value, &end); if (!*end && (allowZero ? amount >= 0.0f : amount > 0.0f)) return amount; puts(allowZero ? "Amount cannot be negative." : "Amount must be greater than zero."); } }
float readPositiveAmount(const char *prompt) { return readAmount(prompt, 0); }
float readNonnegativeAmount(const char *prompt) { return readAmount(prompt, 1); }
