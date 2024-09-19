#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp = head;
unsigned int count = 0;
while (tmp != NULL && count < index)
{
tmp = tmp->next;
count++;
}
return (tmp);
}
