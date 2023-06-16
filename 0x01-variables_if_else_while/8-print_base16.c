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
	int b;
	char now;

	for (b = '0'; b <= '9'; b++)
		putchar(b);
	for (now = 'a'; now <= 'f'; now++)
		putchar(now);
	putchar('\n');

	return (0);
}
