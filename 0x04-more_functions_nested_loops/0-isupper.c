/**
 * main - checks for uppercase character. 
 *
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
char i;
int v;
for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
{
v = 1;
break;
}
else
{
v = 0;
}
}
return (v);
}
