#include "main.h"
/**
 * print_string - Function that print a string
 * @args: variable argument
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int count = 0;
  
  if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	else if (str != NULL)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
			count++;
		}
	}
	return (count);
}
