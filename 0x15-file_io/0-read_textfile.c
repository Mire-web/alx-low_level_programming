#include "main.h"
/**
 * read_textfile - Read file to stdout
 *
 * @filename: pointer to filename
 * @letters: size of bytes to read
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *BUFF_SIZE = NULL;
ssize_t read_bytes = 0;
ssize_t write_bytes = 0;
if (!filename)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
/* Read into buffer */
BUFF_SIZE = malloc(sizeof(char) * (letters + 1));
if (!BUFF_SIZE)
{
close(fd);
return (0);
}
read_bytes = read(fd, BUFF_SIZE, letters);
if (read_bytes == -1)
{
close(fd);
free(BUFF_SIZE);
return (0);
}
/*Terminate the string*/
BUFF_SIZE[read_bytes] = '\0';
/*Write data to stdout posix*/
write_bytes = write(STDOUT_FILENO, BUFF_SIZE, read_bytes);
if (write_bytes == -1 || write_bytes != read_bytes)
{
close(fd);
free(BUFF_SIZE);
return (0);
}
close(fd);
free(BUFF_SIZE);
return (read_bytes);
}
