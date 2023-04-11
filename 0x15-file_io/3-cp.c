#include "main.h"

char *use_buffer(char *fd2);
void close_file(int fd);

/**
 * use_buffer - Allocates 1024 bytes for a buffer.
 * @fd2: The name of the fd2 buffer is storing chars for.
 *
 * Return: pointer to BUFFER.
 */

char *use_buffer(char *fd2)
{
char *BUFFER;

BUFFER = malloc(sizeof(char) * 1024);

if (BUFFER == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", fd2);
exit(99);
}

return (BUFFER);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor.
 */
void close_file(int fd)
{
int ret;

ret = close(fd);

if (ret == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int SRC, DESTINATION, r, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = use_buffer(argv[2]);
SRC = open(argv[1], O_RDONLY);
r = read(SRC, buffer, 1024);
DESTINATION = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (SRC == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

w = write(DESTINATION, buffer, r);
if (DESTINATION == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

r = read(SRC, buffer, 1024);
DESTINATION = open(argv[2], O_WRONLY | O_APPEND);

} while (r > 0);

free(buffer);
close_file(SRC);
close_file(DESTINATION);

return (0);
}
