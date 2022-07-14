#include "main.h"

/**
 *reverse_array-a function that reverses the content of an array of integers.
 *@a: array name
 *@n: size of array
 *Return: always 0
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; a[i] >= 0; i--)
		_putchar(a[i]);
	
}
