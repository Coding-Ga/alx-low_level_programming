#include "main.h"

/**
 * _puts - This is the main function
 *
 * Description - a function that prints a string, to stdout.
 *
 * @str: pointer to a string to print
 *
 * Return: 0
 */


void _puts(char *str)

{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
