#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char now;

	for (now = 'a'; now <= 'z'; now++)
		putchar(now);
	for (now = 'A'; now <= 'Z'; now++)
		putchar(now);
	putchar('\n');

	return (0);
}
