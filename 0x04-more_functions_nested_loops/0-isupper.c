#include "main.h"

/**
 * _isupper - uppercase letter start function
 *
 *Description - a function that checks for uppercase characte.
 *
 * @c: char to check
 *
 * Return: 0 or 1 as success value
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
