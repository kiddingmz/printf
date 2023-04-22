#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
char print_char(va_list);
int print_int(va_list);
float print_float(va_list);
char * print_string(va_list);

#endif
