#include "main.h"
/**
 * print_number_rec - recursive functionS to print
 * @num: positive number to print
 * @count: pointer for count of digit printed
 */
void print_number_rec(unsigned int num, int *count)
{
	if (num / 10)
		print_number_rec(num / 10, count);

	_putchar((num % 10) + '0');
	(*count)++;
}
/**
 * print_number - print an integer from variable arguments
 * @args: variable arguments list contains integer
 * Return: number of char printed
 */
int print_number(va_list args)
	{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
		if (num == 0)
		{
			_putchar('0');
			return (1);
		}

	}
	print_number_rec(num, &count);
	return (count);
	}
