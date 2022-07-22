#include "main.h"

/**
 *_strcmp- a function that compares two strings.
 *@s1: string
 *@s2: a string
 *Return: returns difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, difference = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		difference = s1[i] - s2[i];
		if (difference != 0)
			break;
		i++;
	}
	return (difference);
}
