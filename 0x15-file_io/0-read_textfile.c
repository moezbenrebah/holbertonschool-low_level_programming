#include "holberton.h"


/**
 *read_textfile - function to reads and prints a file
 *@filename: name of the file
 *@letters: number of lettersto print
 *
 *Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

int fd, fd1;
char *buffer;
size_t rd;

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY, 0600);
if (fd == -1)
{
close(fd);
return (0);
}
rd = read(fd, buffer, letters);
buffer[letters] = '\0';
close(fd);

fd1 = write(STDOUT_FILENO, buffer, rd);
if (fd1 == -1)
return (0);

return (fd1);
}
