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
char *_itoa(char *, int, int);
void print_int(int , unsigned int *, unsigned int *, int);
void print_int_b(int , unsigned int *, unsigned int *, int);
char *_itoa_u(char *, unsigned long int, unsigned int, char);
void print_int_u(unsigned int , unsigned int *, unsigned int *, unsigned int);
void print_int_o(unsigned int , unsigned int *, unsigned int *, unsigned int);
void print_int_h(unsigned int , unsigned int *, unsigned int *, unsigned int);
void print_int_H(unsigned int , unsigned int *, unsigned int *, unsigned int);
#endif
