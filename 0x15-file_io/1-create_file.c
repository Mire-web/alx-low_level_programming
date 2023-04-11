#include "main.h"

/**
 * create_file - Create a file object
 *
 * @filename: file to create
 * @text_content: text to create file with
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
int fd, text_size = 0;
ssize_t write_bytes = 0;
if (filename == NULL)
{
return (-1);
}

if (text_content)
{
while (text_content[text_size])
{
text_size++;
}
}

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
write_bytes = write(fd, text_content, text_size);
if (fd == -1 || write_bytes == -1)
{
return (-1);
}
close(fd);
return (1);
}
