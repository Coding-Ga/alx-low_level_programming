#include <stdio.h>
#include <unistd.h>
/**
 * main - This is the main function
 * Description: prints or outputs all the single digit numbers of
 * base 10 from 0
 * Return: Gives a value of 0
 */

int main(void)
{
int a;

for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}
