#include "shell.h"

/**
 * bfree - this frees a pointer and NULLs the address
 * @ptr: the address of the pointer set to free
 *
 * Return: if freed 1, 0 otherwise.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
