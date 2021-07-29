#ifndef VARIADIC_FUNCS_H
#define VARIADIC_FUNCS_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * struct printable - new structure for printing
 * @type: symbol
 * @print_type: printing
 */
struct printable
{
char type;
void (*print_type)(va_list args);
};
typedef struct printable print_t;
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif
