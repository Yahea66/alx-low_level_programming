#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the first linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t c = 0;
while (h != NULL)
{
printf("%d\n", h->n);
c++;
h = h->next;
}
return (c);
}
