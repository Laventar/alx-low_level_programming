#include "main.h"
/**
 * _islower - Print_lowercase_alphabelt
 *@c: The character to be checked
 * Return: 0 Always success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
