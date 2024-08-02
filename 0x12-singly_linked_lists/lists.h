#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

struct list
{
char *str;
int len;
struct list *next;
};
typedef struct list list_t;

size_t print_list(const list_t *h);

#endif
