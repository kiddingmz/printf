#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *, ...);
int _strlen(const char *);
char _char(va_list);
char* _int(va_list);
float _float(va_list);
char *_string(va_list);
char *_itoa_(char *, int);
char *_itoa(char *, int);
#endif
