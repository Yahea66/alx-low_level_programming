#include <unistd.h>
/**
* prints char to the std output
*/
int _putchar(char c) 
{
return (write(1, &c, 1));
}
