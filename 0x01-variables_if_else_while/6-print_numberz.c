#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit number of base 10
 * starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 0; b < 10;  b++)
	{
		putchar(b + '0');
	}
	putchar('\n');

	return (0);
}
