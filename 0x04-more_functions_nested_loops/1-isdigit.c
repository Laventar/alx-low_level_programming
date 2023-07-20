#include "main.h"
/**
 * _isdigit - Check if a letter is a digit
 * @x: The number to be checked
 * Return: 1 for a letter that is a digit else 0
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
