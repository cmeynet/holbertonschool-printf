#include "main.h"
#include "stdio.h"
/**
 * print_char - fonction that print char charracter
 * @args: variable arguments
 */
void print_char(va_list args)
{
	char character = va_arg(args, int);

	if (character != 0)
	{
		_putchar(character);
	}
}
