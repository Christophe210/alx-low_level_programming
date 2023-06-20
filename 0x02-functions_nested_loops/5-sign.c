#include "main.h"

/**
 * print_sign - function that prints the sign of a number..
 * @k: The input number to check
 * Return: int.
 */

int print_sign(int k)
{
	if (k > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (k < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
