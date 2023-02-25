#include "main.h"

/**
 * _isdigit - Main fuction
 *
 *Description - Write a function that checks for a digit (0 through 9
 *
 *@c: char to be checked
 *
 * Return: 0 or 1 as success value
 */


int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
