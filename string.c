#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @sl: the string whose length to check
 * Return: integer length of string
 */

int _strlen(char *sl)
{
	int i = 0;

	if (!sl)
		return (0);
	while (*sl++)
		i++;
	return (i);
}

/**
 * _strcmp - performs lexicogarphic comparison of two strangs.
 * @sl1: the first strang
 * @sl2: the second strang
 * Return: negative if sl1 < sl2, positive if sl1 > sl2, zero if sl1 == sl2
 */
int _strcmp(char *sl1, char *sl2)
{
	while (*sl1 && *sl2)
	{
		if (*sl1 != *sl2)
			return (*sl1 - *sl2);
		sl1++;
		sl2++;
	}
	if (*sl1 == *sl2)
		return (0);
	else
		return (*sl1 < *sl2 ? -1 : 1);
}

/**
 * starts_with - checks if needle starts with haystack
 * @haystack: string to search
 * @needle: the substring to find
 * Return: address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 * Return: pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
