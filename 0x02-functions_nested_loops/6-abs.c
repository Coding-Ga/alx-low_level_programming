#include "main.h"

/**
 * _abs - main function
 *
 * @i: this is the number which has its absolute
 * value printed
 *
 * Description: this returns the absolute value
 * of the input 
 *
 * Return: int
 */

int _abs(int i)

{
	int results;

	if (i >= 0)

	{
		results = i;
	}


	else

	{
		results = i * -1;
	}

	return (results);
}
