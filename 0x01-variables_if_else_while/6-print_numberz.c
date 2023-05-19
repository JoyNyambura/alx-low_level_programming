#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Print 10 digits using putchar'
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
