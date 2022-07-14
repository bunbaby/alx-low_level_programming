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
	char **ptr;

	dest = strncat(dest, src, n);
	ptr = &dest;
	return (*ptr);
}
