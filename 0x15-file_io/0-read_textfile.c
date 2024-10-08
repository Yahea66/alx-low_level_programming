#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file name string
 * @letters: number of letters to be read and printed
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytesread, byteswritten;
int fd;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(letters);
if (buffer == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}
bytesread = read(fd, buffer, letters);
if (bytesread == -1)
{
close(fd);
free(buffer);
return (0);
}
byteswritten = write(STDOUT_FILENO, buffer, bytesread);
close(fd);
free(buffer);
if (byteswritten == -1 || byteswritten < bytesread)
return (0);
return (byteswritten);
}
