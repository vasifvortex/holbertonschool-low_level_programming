#include <stdlib.h>
/**
 * malloc_checked - a pointer to the allocated memory
 *@b: unsigned int type
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
