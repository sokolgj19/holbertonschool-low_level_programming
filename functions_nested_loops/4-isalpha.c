#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 * @c: the character to check (as an int)
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
