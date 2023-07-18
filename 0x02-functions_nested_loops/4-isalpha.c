#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: Alphabet to check for
 * Return: 0 Always success
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
