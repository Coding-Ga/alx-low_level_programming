#include <stdio.h>
#include <ctype.h>

/**
 *main - Start point
 *
 *Description: Print the alphabeth without q and e
 *
 *Return: Always (0) Success
 *
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	if (c != 'q' && c != 'e')

	putchar(c);

	putchar('\n');
	return (0);
}
