#include "main.h"

/**
 *_strncpy-function that copies a string
 *@dest: a string
 *@src: a string
 *@n:number of char to copy
 *Result: ptr
 */

char *_strncpy(char *dest, char *src, int n)
{
	char **ptr;
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	ptr = &dest;

	return (*ptr);
}


