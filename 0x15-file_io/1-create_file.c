#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file.
 * @filename: pointer to the file name string.
 * @text_content: the content of the file.
 *
 * Return: -1 (fail), 1 (success).
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t byteswritten = 0;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
byteswritten = write(fd, text_content, strlen(text_content));
if (byteswritten == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
