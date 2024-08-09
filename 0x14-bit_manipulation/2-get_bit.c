#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to be checked
 * @index: the index of the desired bit.
 *
 * Return: the value of the bit (0,1) or (-1) if an error happened.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int max_idx=(sizeof(n)*8)-1;
if(index>max_idx)
{
return(-1);
}
else if((n>>index)&1)
{
return(1);
}
return(0);
}
