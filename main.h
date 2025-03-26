#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - Struct to print
 * based on argument type
 *
 * @type: type of argument
 * @f: the function associated
 */
typedef struct print
{
	char *type;
	int (*f)(va_list);
} print_t;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_number(va_list args);
void print_number_rec(unsigned int num, int *count);

#endif
