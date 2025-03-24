#include <stdio.h>
#include "main.h"
/**
 * _printf - main fonction printf
 * 
 * Return: 
 */
int _printf(const char *format, ...)
{
	print_t specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list args;
	unsigned int i = 0, j;
	/* const char *separator = "";*/

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (i == '%')
			i++;
		else
		{
			j = 0;
			while (specifiers[j].type != NULL)
			{
		
				if (format[i] == *specifiers[j].type)
					specifiers[j].f(args);
				j++;
			}
		}
		i++;
	}

	_putchar('\n');
	va_end(args);
	return (0);
}
