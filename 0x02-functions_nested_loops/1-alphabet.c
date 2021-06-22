#include "holberton.h"

/**
  * print_alphabet - printing
  * Return - nothing
  */
void print_alphabet(void)
{
char alpha = 'a';
while (alpha < 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
