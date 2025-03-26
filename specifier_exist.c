#include "main.h"
/**
 * specifier_exist - Function that checks
 * if a specifier exists in an array
 * @specifiers: array to browse
 * @spec: desired character
 *
 * Return: i if the specifier is finded
 * -1 if the specifier doesn't exist
 */
int specifier_exist(print_t specifiers[], char spec)
{
	int i;

	for (i = 0; specifiers[i].type != NULL; i++)
	{
		if (specifiers[i].type[0] == spec)
		{
			return (i);
		}
	}
	return (-1);
}
