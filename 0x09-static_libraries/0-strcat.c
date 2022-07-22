#include "main.h"

/**
 *_strcat - function that adds two strings
 *@dest: a string
 *@src: a string to be appended
 *Return: returns ptr
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char **p;

	for (i = 0; dest[i] != '\0'; i++)
		dest[i] = dest[i];

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;

	}
	p = &dest;
	return (*p);
}
