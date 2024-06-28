/**
 * main - checks for a digit (0 through 9). 
 *
 * Return: Returns 1 if c is a digit
 */
int _isdigit(int c) 
{
char i = '0';
int v = 0;
for (; i <= '9'; i++)
{
if (c == i)
{
v = 1;
break;
}
}
return (v);
}
