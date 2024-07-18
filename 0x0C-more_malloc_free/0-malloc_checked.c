#include <stdlib.h>
#include <stddef.h>

/**
*malloc_checked - allocates memory using malloc.
*@b: number of bytes
*
*Return: Void
*/
void *malloc_checked(unsigned int b)
{
void *arr = malloc(b);
if (arr == NULL)
{
exit(98);
}
return (arr);
}
