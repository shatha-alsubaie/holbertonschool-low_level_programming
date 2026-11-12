#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to look for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		i = 0;
		while (needle[i] != '\0' && haystack[i] == needle[i])
			i++;
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}

	return ('\0');
}
