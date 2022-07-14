#include "main.h"
#include <string.h>

/**
 *_strncat- a function that concatenates two strings.
 *@dest: a string
 *@src: a string to be appended
 *@n: number of char to append
 *Return: ptr
 */
char *_strncat(char *dest, char *src, int n)
{
	char **p;
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}
	for (j = 0; src[i] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
	}
	p = &dest;
	return (*p);
}
