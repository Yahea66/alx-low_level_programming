/**
 * _isupper - Checks for uppercase character.
 * @c: The character to be checked
 *
 * Description: This function checks if the given character is an uppercase
 * letter (A through Z). If the character is uppercase, it returns 1.
 * Otherwise, it returns 0.
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
char i;
for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
