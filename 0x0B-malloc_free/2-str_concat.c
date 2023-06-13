#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *str_concat - covatenates two strings
 *@s1: string 1
 *@s2: string 2
 *
 * Return: ptr to cocatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;

	if (s1 == NULL)
	{
		return (" ");
	}
	if (s2 == NULL)
	{
		return (" ");
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
