#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcat - function that adds two strings
 *@dest: a string
 *@src: a string to be appended
 *Return: returns ptr
 */

char *_strcat(char *dest, char *src)
{
	char **ptr;

	dest = strcat(dest, src);
	ptr = &dest;
	return (*ptr);
}
