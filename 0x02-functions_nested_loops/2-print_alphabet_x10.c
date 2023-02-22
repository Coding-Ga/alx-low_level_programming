#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: It prints lower case alphabets 10 times.
 *
 * Return: Gives us void as a success value.
 */

void print_alphabet_x10(void)

{
	char alphats[] = "abcdefghijklmnopqrstuvwxyz";
	int length = 26;
	int counter;
	int a = 0;

	while (a < 10)
	{
		counter = 0;

		while (counter < length)
		{
			_putchar(alphats[counter]);
			counter++;
		}

		_putchar('\n');
		a++;
	}
}
