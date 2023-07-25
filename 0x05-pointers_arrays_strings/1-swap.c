#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @m: integer to swap
 * @n: integer to swap
 */
void swap_int(int *m, int *n)
{
	int a;

	a = *m;
	*m = *n;
	*n = a;
}
