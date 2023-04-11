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
