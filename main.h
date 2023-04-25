#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *, ...);
int _strlen(const char *);
char _char(va_list);
char *_int(va_list);
float _float(va_list);
char *_string(va_list);
char *_itoa_(char *, int);
char *_itoa(char *, int);
char *_strcpy(char *, const char *);
char *_charcpy(char *, const char);
void _memset(char *, int, size_t);
#endif
