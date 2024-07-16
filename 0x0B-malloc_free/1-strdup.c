#include<stdlib.h>
#include<stddef.h>

/**
*_strdup-returns a pointer to a newly allocated space in memory
*          which contains a copy of the string given as a parameter
*@str:pointer to the string to be copied
*
*Return:NULL if str is NULL or if memory allocation fails,
*       otherwise a pointer to the duplicated string
*/
char*_strdup(char*str)
{
unsigned int size=0;
char*arr;
unsigned int i;
if(str==NULL)
{
return(NULL);
}
while(str[size])
{
size++;
}
arr=malloc(sizeof(char)*(size+1));
if(arr==NULL)
{
return(NULL);
}
for(i=0;i<size;i++)
{
arr[i]=str[i];
}
arr[size]='\0';
return(arr);
}
