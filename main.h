#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *, ...);
int _strlen(const char *);
char _char(va_list);
char *_int(va_list, int);
float _float(va_list);
char *_string(va_list);
char *_itoa_(char *, int, int);
char *_itoa(char *, int, int);
char *_strcpy(char *, const char *);
char *_charcpy(char *, const char);
void _memset(char *, int, size_t);
void _putchar(char);
unsigned int _putstring(const char *);
size_t _lenchar(const char *, size_t, int);
#endif
