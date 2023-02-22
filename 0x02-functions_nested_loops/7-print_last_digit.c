#include "main.h"

/**
 * print_last_digit - main function
 * @i: this is the number which has its last
 * figure printed
 *
 * Description: this returns and prints the
 * last value of the input @int
 *
 * Return: int
 */

int print_last_digit(int i)

{
	int a = -(i % 10);

	if (a < 0)
		a = a * -1;

	_putchar('0' + a);

	return (a);
}
