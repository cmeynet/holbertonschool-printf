#include "main.h"
#include "stdio.h"
/**
 * print_char - fonction that print char charracter
 * 
 */
int print_char(va_list args)
{
	int character = va_arg(args, int);

	if (character != 0)
	{
		_putchar(character);
	}
	return (1);
}
