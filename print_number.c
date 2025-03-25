#include "main.h"
/**
 * print_number_rec - recursive function
 * @num: positive number
 */
void print_number_rec(unsigned int num)
{
	if (num / 10)
		print_number_rec(num / 10);

	_putchar((num % 10) + '0');
}
/**
 * print_number - print an integer  
 * @args: variable arguments
 * Return: number of char printed
 * 
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

	else (num = n);
	
if (num / 10)
print_number_rec(num);
while (num != 0)

{
	count++;
	num /= 10;
}
return(count);
}