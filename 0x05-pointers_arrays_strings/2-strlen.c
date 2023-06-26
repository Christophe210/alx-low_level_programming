#include "main.h"

/**
 * _strlen - retruns the length of a string
 * @s: string to be checked
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
