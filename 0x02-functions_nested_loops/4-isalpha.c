#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * Return: int.
 * @c: The input character to check
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
