#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/**
 * check_elf_print_magic - check if file is an ELF header file
 *
 * @e_ident: pointer to indent
 */

void check_elf_print_magic(unsigned char *e_ident)
{
int n = 0;

while (n < 4)
{
if (e_ident[n] != 127 &&
e_ident[n] != 'E' &&
e_ident[n] != 'L' &&
e_ident[n] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
n++;
}
printf("ELF Header:\n");
n = 0;

printf("  Magic:   ");

while (n < EI_NIDENT)
{
printf("%02x", e_ident[n]);

if (n == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
n++;
}
}

#endif
