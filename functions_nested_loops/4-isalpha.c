#include "main.h"

/**
 * _isalpha - Checks whether a character is a letter
 * @c: Character code to check
 *
 * Return: 1 if a letter, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
