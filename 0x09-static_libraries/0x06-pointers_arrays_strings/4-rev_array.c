#include "main.h"

/**
 *reverse_array-a function that reverses the content of an array of integers.
 *@a: array name
 *@n: size of array
 *Return: always 0
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
