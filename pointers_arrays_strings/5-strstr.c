#include "main.h"
/**
 * _strstr - called from main
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: pointer to char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}
		}
		haystack++;
	}
	return ('\0');
}
