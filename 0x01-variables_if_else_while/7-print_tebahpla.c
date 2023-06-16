#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: prints lowercase alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 'z'; b >= 'a'; b--)
	{
	putchar(b);
	}
putchar('\n');
return (0);
}
