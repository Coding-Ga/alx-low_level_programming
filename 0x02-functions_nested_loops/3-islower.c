
/**
 *_islower - Main function
 *
 *@c: character to be checked
 *
 *Description: Program that checks for lowercase character
 *
 *Return: the success value of the function
*/

int _islower(int c)
{

	int value;

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

	return (value);
}
