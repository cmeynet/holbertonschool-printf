#include "main.h"
#include "stdio.h"
/**
 * print_char - fonction that print char charracter
 * 
 */
int print_char(va_list args)
{
	char character = va_arg(args, int);

	if (character != 0)
	{
		/*if (character == '%')
			_putchar('%');*/
		_putchar(character);
	}
	return (1);
}
