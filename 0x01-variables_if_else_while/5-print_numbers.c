#include <stdio.h>
#include <ctype.h>

/**
 *main - Start point
 *
 *Description: a program that prints all single numbers of base 10 from 0
 *
 *Return: Always (0) Success
 *
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)

	putchar(c);
	putchar('\n');
	return (0);
}
