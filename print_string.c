#include "main.h"
/**
 * print_string - Function that print a string
 * @args: argument pointer
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int len = 0;

	if (str != NULL)
	{
		while (str[len] != '\0')
		{
			_putchar(str[len]);
			str++;
			len++;
		}
		/* Return the lenght of the string */
		return (len);
	}
	else if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	return (0);
}
