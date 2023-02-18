#include <stdio.h>
#include <unistd.h>
/**
 * main - This is the main function
 * Description: prints or outputs the alphabet in lowercase except q and e
 * Return: Gives a value of 0
 */

int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
else
{
}
}
putchar('\n');
return (0);
}
