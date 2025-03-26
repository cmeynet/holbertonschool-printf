#include "main.h"
/**
 * _printf - fonction that recodes the printf function
 * @format: list of types of arguments
 * passed to the function
 *
 * Return: the total number of characters printed
 * (excluding the final \0)
 */
int _printf(const char *format, ...)
{
	print_t specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_number},
		{"d", print_number},
		{NULL, NULL}
	};
	va_list args;
	unsigned int i = 0;
	int count = 0;
	int index; /* Find if the specifier exist */

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			index = specifier_exist(specifiers, format[i]);
			if (index != -1) /* Specifier found */
				count += specifiers[index].f(args);
			else  /* Specifier not found: display `%` followed by the character */
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
