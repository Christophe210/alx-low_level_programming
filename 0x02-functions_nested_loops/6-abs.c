#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @k: The input number to check
 * Return: int.
 */

int _abs(int k)
{
	if (k < 0)
	{
		k = k * (-1);
		return (k);
	}
	else
		return (k);
}
