#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stddef.h>
/**
 * struct print - Structure for types
 *
 * @type: type to be printed
 * @f: function to print
 *
 */
typedef struct print
{
	char *type;
	int (*f)(va_list);
} print_type;

int _printf(const char *format, ...);
#endif /*MAIN_H*/
