#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *buff = NULL;

if (filename == NULL)
{
return (0);
}

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
{
return (0);
}

o = open(filename, O_RDONLY);
r = read(o, buff, letters);
w = write(STDOUT_FILENO, buff, letters);

if (r == -1 || o == -1 || w == -1 || r != w)
{
free(buff);
return (0);
}

free(buff);
close(o);
return (r);
}