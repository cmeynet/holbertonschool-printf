#include "main.h"
/**
 * print_string - Function that print a string
 * @args: variable argument
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char*);

	if (str != NULL)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	else if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
	}
}
