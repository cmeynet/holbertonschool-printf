#include "main.h"
/**
 * print_percent - Function that prints %
 * @args: variable argument
 *
 * Return: number of character printed (1)
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
