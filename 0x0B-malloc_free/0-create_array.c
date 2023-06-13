#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates an array of size size and assigns char c
 *@size: size of array
 *@c: char to assign
 *
 *Return: Returns ptr to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
