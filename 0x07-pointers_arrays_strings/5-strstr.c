#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strstr - find the first occurence
 *@haystack: string
 *@needle: string
 *
 *Return: the pointer to the first occurence
 */

char *_strstr(char *haystack, char *needle)
{

	int i = 0;
	int j = 0;
	int k, s;

	for (s = 0; needle[s]; s++)
	;
	if (s == 0 || !needle)
	return (NULL);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			for (k = i; haystack[k]; k++)
			{
				if (haystack[k] != needle[j])
					return (NULL);
				j++;
				if (needle[j] == '\0')
					return (&(haystack[i - 1]));
			}
		}
		i++;
	}
	return (NULL);
}
