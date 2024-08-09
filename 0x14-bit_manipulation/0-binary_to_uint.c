#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
int power=0;
const char *tmp=b;
unsigned int result=0;
if(b==NULL)
{
return(0);
}
while(*tmp)
{
if(*tmp!='0'&&*tmp!='1')
{
return(0);
}
power++;
tmp++;
}
while(*b)
{
power--;
if(*b=='1')
{
result+=1U<<power;
}
b++;
}
return(result);
}
