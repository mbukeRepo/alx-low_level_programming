#include "main.h"
#include "holberton.h"

/**
 * append_text_to_file - appends to file some text
 * @filename: name of the file to append text
 * @text_content: text to append to file
 * Return: 1 for success -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[len])
{
len++;
}
}

o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);
if (o == -1 || w == -1)
{
return (-1);
}
close(o);
return (1);
}
