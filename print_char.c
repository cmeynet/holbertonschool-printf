#include "main.h"
/**
 * print_char - fonction that print char charracter
 * @args: variable arguments list containing the char
 * Return: number of char printed (1)
 */
int print_char(va_list args)
{
	char character = va_arg(args, int);

	if (character != 0)
	{
		_putchar(character);
	}
	return (1);
}
