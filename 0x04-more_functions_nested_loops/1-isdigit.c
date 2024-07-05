/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The character to be checked
 *
 * Description: This function checks if the given character is a digit
 * (0 through 9). If the character is a digit, it returns 1.
 * Otherwise, it returns 0.
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
char i;
for (i = '0'; i <= '9'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
