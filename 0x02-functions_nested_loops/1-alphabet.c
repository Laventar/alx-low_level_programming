#include "main.h"
#include <unistd.h>
/**
 * main - Print alphabet in lowercase
 *
 * Return: 0 Always success
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
