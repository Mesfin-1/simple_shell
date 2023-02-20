#include "shell.h"

/**
 * _memset - fills memory with a constant byte
 * @pm: the pointer to the memory area
 * @by: the byte to fill *pm with
 * @k: the amount of bytes to be filled
 * Return: (pm) a pointer to the memory area pm
 */

char *_memset(char *pm, char by, unsigned int k)
{
	unsigned int i;

	for (i = 0; i < k; i++)
		pm[i] = by;
	return (pm);
}

/**
 * sfree - frees a string of strings
 * @pp: string of strings
 */

void sfree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to previous malloc'ated block
 * @old_size: byte size of previous block
 * @new_size: byte size of new block
 * Return: pointer to da ol'block nameen.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
