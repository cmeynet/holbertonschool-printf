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
		{"d", print_number},
		{"i", print_number},
		{NULL, NULL}
	};

	va_list args;
	unsigned int i = 0, j;
	/* Count the number of characters printed
	int count = 0; */

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i = i + 2;
				continue;
			}
			i++;

			j = 0;
			while (specifiers[j].type != NULL)
			{
				if (format[i] == *specifiers[j].type)
				{
					specifiers[j].f(args);

					break;
				}
				j++;
			}
		}
		else
		{
			/* Display characters other than '%' */
			_putchar(format[i]);
		}
		i++;
	}

	_putchar('\n');
	va_end(args);
	return (0);
}
