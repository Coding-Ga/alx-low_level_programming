#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Start point
 *
 *Description: Print the last digit of the number stored in the variable n
 *
 *Return: Always (0) Success
 */

int main(void)

{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	scanf("%d", &n);
	m = n % 10;

	if (m > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, m);

	else if (m == 0)
	printf("Last digit of %d is %d and is 0\n", n, m);

	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
