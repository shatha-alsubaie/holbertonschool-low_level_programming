#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the bytes that the prefix can contain
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (s[count] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[count] == accept[i])
				break;
		}
		if (accept[i] == '\0')
			break;
		count++;
	}

	return (count);
}
