#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the linked list
 *
 * Return: number of lists.
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)");
}
else
{
printf("[%d] %s", h->len, h->str);
}
h = h->next;
n++;
printf("\n");
}
return (n);
}
