#include "main.h"
/**
 * main - Entry point
 * Description: 'Print c lowercase'
 * _islower - show 1 if input is c
 * @c: char to be checked
 * Return: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
