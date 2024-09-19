#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp = head;
int result = 0;
while (tmp != NULL)
{
result += tmp->n;
tmp = tmp->next;
}
return (result);
}
