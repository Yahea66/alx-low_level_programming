#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, The function sets the head to NULL
 * @head: pointer to pointer to the first linked list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
*head = NULL;
}
