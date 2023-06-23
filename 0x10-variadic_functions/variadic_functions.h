#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * struct format_type - a format type structure
 * @specifier: pointer to the specifier character
 * @f: a pointer function
 *
 * Description: creating the structure of the format specifier
 * and the corresponding pointer function
 */

typedef struct format_type
{
	char *specifier;
	void (*f)(char *separator, va_list args);
} f_dt;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_number(int n);
void print_a_char(char *separator, va_list args);
void print_an_integer(char *separator, va_list args);
void print_a_float(char *separator, va_list args);
void print_a_string(char *separator, va_list args);

#endif /* VARIADIC_FUNCTIONS_H isndef */
