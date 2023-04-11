#include "main.h"

/**
 * append_text_to_file - append text to file
 *
 * @filename: pointer to file
 * @text_content: text to append
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, text_size = 0, write_bytes = 0;
/*Check if file pointer is null*/
if (filename == NULL)
{
return (-1);
}
/*Calculate the amount of characters to append*/
if (text_content)
{
while (text_content[text_size])
{
text_size++;
}
}
fd = open(filename, O_WRONLY | O_APPEND);
write_bytes = write(fd, text_content, text_size);
/*Check if File exist and is opened and append was successful*/
if (fd == -1 || write_bytes == -1)
{
return (-1);
}
close(fd);
return (1);
}
