#include <stdio.h>

/**
 *main - Write a function that checks for uppercase character
 *Return: 1 if c is upper case
 *0 if otherwise
 *@c: the given letter
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
