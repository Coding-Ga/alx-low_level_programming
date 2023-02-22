#include "main.h"
/**
 *_isalpha - Main function
 *
 *@c: the characters to be checked
 *
 *Description: Checks for alphabetic character
 *
 *Return: 1 for a letter character, 0 if otherwise
 */


int _isalpha(int c)
{
	int function;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		function = 1;
	else
		function = 0;

	return (function);
}
