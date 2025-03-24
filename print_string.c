#include "main.h"
/**
 * print_string - Function that print a string
 * @args: argument pointer
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
		_putchar('\n');
	}
	else if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		_putchar('\n');
	}
}
