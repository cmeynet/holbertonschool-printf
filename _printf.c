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
	int count = 0;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i += 2;
				continue;
			}
			i++;
			j = 0;
			while (specifiers[j].type != NULL)
			{
				if (format[i] == *specifiers[j].type)
				{
					count += specifiers[j].f(args);
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
