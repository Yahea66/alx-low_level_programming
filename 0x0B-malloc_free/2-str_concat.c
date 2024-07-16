#include<stdlib.h>
#include<stddef.h>

/**
*find_len-finds the length of a string
*@str:pointer to the string
*
*Return:the length of the string, or 0 if str is NULL
*/
int find_len(char *str)
{
int size=0;
if(str==NULL)
{
return(0);
}
while(*str)
{
size++;
str++;
}
return(size);
}

/**
*str_concat-concatenates two strings
*@s1:pointer to the first string
*@s2:pointer to the second string
*
*Return:NULL if memory allocation fails or both strings are empty,
*otherwise a pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
int size=find_len(s1)+find_len(s2);
int i=0,n=0;
char *arr;
if(size==0)
{
return(NULL);
}
arr=malloc(sizeof(char)*(size+1));
if(arr==NULL)
{
return(NULL);
}
if(s1!=NULL)
{
while(s1[i])
{
arr[i]=s1[i];
i++;
}
}
if(s2!=NULL)
{
while(s2[n])
{
arr[i]=s2[n];
i++;
n++;
}
}
arr[size]='\0';
return(arr);
}
