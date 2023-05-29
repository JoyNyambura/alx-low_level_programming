#include "main.h"
/**
 * swap-int - swap the contents of a and b
 * @a: content to swap with b
 * @b: content to be swapped with a
 *
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
