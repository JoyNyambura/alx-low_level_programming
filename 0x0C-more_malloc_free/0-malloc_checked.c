#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - allocates memory using malloc
 *@b: no of bytes to alocate
 *
 *Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);

}
