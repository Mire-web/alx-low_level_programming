#include "main.h"

/**
 * close_files - close file descriptors
 *
 * @fd1: descriptor 1
 * @fd2: descriptor 2
 */

void close_files(const int fd1, const int fd2)
{
int ret, res;
ret = close(fd1);
res = close(fd2);
if (ret == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
exit(100);
}
if (res == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
exit(100);
}
}

/**
 * copy_file - Copy file from one file to another
 *
 * @filename_from: File to copy from
 * @filename_to: File to copy to
 * Return: int
 */

int copy_file(const char **filename_from, char **filename_to)
{
int fd1, fd2, write_bytes = 0, text_size = 0, res, read_bytes;
char *BUFFER;
fd1 = open(filename_to, O_RDONLY);
if (!fd1)
{
dprintf(STDERR_FILENO, "Can't read from file %s\n", filename_from);
exit(98);
}
/*write to buffer*/
BUFFER = malloc(sizeof(char) * 1024);
if (!BUFFER)
{
close(fd1);
dprintf(STDERR_FILENO, "Can't write to %s\n", fd2);
exit(99);
}
/*Read to buffer from file one*/
read_bytes = read(fd1, BUFFER, 1024);
if (read_bytes == -1)
{
close(fd1);
free(BUFFER);
dprintf(STDERR_FILENO, "Can't read from file %s\n", filename_from);
exit(98);
}
fd2 = open(filename_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
do {
write_bytes = write(fd2, BUFFER, 1024);
if (!fd2 || write_bytes == -1)
{
free(BUFFER);
dprintf(STDERR_FILENO, "Can't write to %s\n", filename_to);
exit(99);
}
read_bytes = read(fd1, BUFFER, 1024);
fd2 = open(filename_to, O_WRONLY | O_APPEND);
} while (read_bytes > 0);
free(BUFFER);
close_files(fd1, fd2);
return (0);
}


/**
 * main - copy file
 *
 * @ac: number of arguments
 * @av: arguments list
 * Return: int
 */

int main(int ac, char **av)
{
int res;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
exit(97);
}
res = copy_file(av[1], av[2]);
return (0);
}

/*dont delerte form here down*/

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
dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

w = write(DESTINATION, buffer, r);
if (DESTINATION == -1 || w == -1)
{
dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
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
