#include "main.h"
/**
 *_isalpha - Checks for alphabetic char
 *@c: char to be checked
 *Return: 1 if c is a letter , 0 if otherwise
 */
int _isalpha(int c)
{
	if  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
