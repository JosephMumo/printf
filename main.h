#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

/* _putchar */
int _putchar(char c);

int arg_printer(va_list arg_ptr, const char *format);
int print_str(va_list arg_ptr);
int print_num(unsigned int n, int c);
int print_int(va_list arg_ptr);
int print_rot13(va_list arg_ptr);
int print_u(va_list arg_ptr);
int print_o(va_list arg_ptr);
int print_b(va_list arg_ptr);
int print_x(va_list arg_ptr);
int print_X(va_list arg_ptr);
int print_p(va_list arg_ptr);
int print_S(va_list arg_ptr);
int print_r(va_list arg_ptr);

/* _printf */
int _printf(const char *format, ...);

#endif  /* MAIN_H */
