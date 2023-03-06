#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input parameter
 * @accept: input parameter
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (n = 0 ; accept[n] != '\0' ; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
