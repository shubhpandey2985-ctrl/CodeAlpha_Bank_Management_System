#ifndef UTILS_H
#define UTILS_H
#include <stddef.h>
void printMainMenu(void);
void readLine(const char *prompt, char *value, size_t size);
int readInt(const char *prompt);
float readPositiveAmount(const char *prompt);
float readNonnegativeAmount(const char *prompt);
#endif
