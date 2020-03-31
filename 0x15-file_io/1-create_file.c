#include "holberton.h"

/**
 *create_file - function to creates a file
 *@filename: the name of the file
 *@text_content: string to write
 *
 *Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
int fd, i, wr;
i = 0;

fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
if (filename == NULL)
return (-1);

if (fd == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[i])
i++;

wr = write(fd, text_content, i);
if (wr == -1)
return (-1);
}
close(fd);

return (1);
}
