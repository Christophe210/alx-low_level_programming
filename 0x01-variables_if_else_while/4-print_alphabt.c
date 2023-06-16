#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: prints lowercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	int now;

	for (now = 'a'; now <= 'z'; now++)
	{
		if (now != 'e' && now != 'q')
		{
			putchar(now);
		}
		else
		{
		}
	}
	putchar('\n');
		return (0);
}
