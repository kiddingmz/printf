#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *, ...);
int _strlen(const char *);
unsigned int _putchar(char);
unsigned int _putstring(const char *);
void print_char(int, unsigned int *);
void print_char_iter(int, unsigned int *, unsigned int *);
void print_string(const char *, unsigned int *, unsigned int *);
#endif
