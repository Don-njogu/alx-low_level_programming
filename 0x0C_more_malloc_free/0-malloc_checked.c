#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return; Pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *n = malloc(b);
	if (n == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		exit(98);
	}
	return (n);
}
