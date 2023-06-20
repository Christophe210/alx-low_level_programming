#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @k: The input number to check
 * Return: int.
 */

int print_last_digit(int k)
{

	k %= 10;

	if (k < 0)
		k *= -1;

	_putchar(k + '0');
	return (k);
}
