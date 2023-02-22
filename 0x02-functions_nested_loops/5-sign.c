#include "main.h"

/**
 * print_sign - Main function
 *
 *@i: this is the sign's number
 *
 * Description: prints the sign of a number
 *
 * Return: 1 if i > 0, 0 if i == 0, -1 if i < 0
 */

int print_sign(int i)

{

	if (i > 0)
	{
		_putchar('+');
		return (1);
	}


	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}


	_putchar('0');
	return (0);
}
