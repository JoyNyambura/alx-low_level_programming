#include "main.h"
/**
 * main - Entry point
 * Description: 'Print lowercase alphabets'
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for ( i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
