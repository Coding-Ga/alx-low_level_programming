#include <stdio.h>
/**
 * main - This is the main function
 * Description: prints or outputs all possible single-digit numbers
 * Return: Gives a value of 0
 */

int main(void)
{
int i;

for (i = '0'; i <= '9' ; i++)
{
putchar(i);

if (i != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
