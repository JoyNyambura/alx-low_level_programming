#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Print nos of base  16'
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
