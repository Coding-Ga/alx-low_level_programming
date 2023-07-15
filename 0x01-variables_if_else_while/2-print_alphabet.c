#include <stdio.h>
#include <ctype.h>

/**
 *main - Start point
 *
 *Description: A program to print alphabets in lower case
 *
 *Return: Always (0) Success
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)

	putchar (c);
	putchar ('\n');
	return (0);
}
