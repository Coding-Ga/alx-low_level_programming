/**
 * _strlen - This is the main function
 *
 * Description a function that returns the length of a string
 *
 * @s: string to check
 *
 * Return: length of the string
 */

int _strlen(char *s)

{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
