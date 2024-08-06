#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to pointer to the first linked list.
 *
 * Return: the head node’s data (n) as int.
 */
int pop_listint(listint_t **head)
{
int num;
listint_t *tmp;
if (*head == NULL)
{
return (0);
}
num = (*head)->n;
tmp = *head;
*head = (*head)->next;
free(tmp);
return (num);
}
