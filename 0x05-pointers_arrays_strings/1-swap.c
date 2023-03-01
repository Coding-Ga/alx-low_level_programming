#include "main.h"

/**
 * swap_int - This is the main function
 *
 * Description - a function that swaps the values of two integers.
 *
 * @a: pointer 1
 *
 * @b: pointer 2
 *
 * Return: Returns the sucess value
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
