#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_buffer - creates a buffer
 * @file: file to write to
 * Return: buffer
 */
char *create_buffer(char *file)
{
char *buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buff);
}

/**
 * close_file - closes files opened in our program
 * @fd: file descriptor for the opened file
 */

void close_file(int fd)
{
int c;
c = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - main function for our file
 * @ac: number of arguments to our program
 * @argv: array of program args
 * Return: 0 for success
 */

int main(int ac, char **argv)
{
int from, to, r, w;
char *buff = NULL;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buff = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buff, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
w = write(to, buff, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}
r = read(from, buff, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buff);
close_file(to);
close_file(from);
return (0);
}
