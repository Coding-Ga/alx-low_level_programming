#include <stdio.h>
#include <unistd.h>
/**
 * main - This is the main function
 * Description: prints or outputs lowercase alphabets in reverse order
 * Return: Gives a value of 0
 */

int main(void)
{
int a;

for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
