#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: the address of memory
 * @size: the size of the memory
 *
 * Return: a pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size);
{
void *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
{
*((char *)ptr + i) = 0;
}
return (ptr);
}
