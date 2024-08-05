#include <stddef.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer to the first linked list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t c = 0;
while (h != NULL)
{
c++;
h = h->next;
}
return (c);
}
