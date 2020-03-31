#include "holberton.h"


/**
 *append_text_to_file - appends a text at the end of a file
 *@filename: the filename
 *@text_content: string to add
 *
 *Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, wr, i = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[i])
i++;
wr = write(fd, text_content, i);
}

close(fd);
if (wr == -1)
return (-1);

return (1);
}
