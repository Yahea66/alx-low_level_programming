#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first linked list.
 *
 * Return: the sum of n as int
 */
int sum_listint(listint_t *head)
{
listint_t *tmp = head;
int result = 0;
while (tmp != NULL)
{
result += tmp->n;
tmp = tmp->next;
}
return (result);
}
