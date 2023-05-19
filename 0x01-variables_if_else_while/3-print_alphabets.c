#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Print both upper and lower case alphabets in new line'
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for  (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
