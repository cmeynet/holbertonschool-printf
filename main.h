#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

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
	void (*f)(va_list);
} print_t;


int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list args);
void print_string(va_list args);
void print_percent(va_list args);

#endif
