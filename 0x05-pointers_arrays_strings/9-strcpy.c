#include "main.h"
/**
 * _strcpy - copy a string
 * @src: string to copy from
 * @dest: string to copy to
 * Return: Input
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);

}
