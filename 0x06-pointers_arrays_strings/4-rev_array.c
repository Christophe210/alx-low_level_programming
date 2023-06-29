#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: an array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
