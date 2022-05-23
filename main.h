#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/* _printf */

int _printf(const char *format, ...);

/* get_print */

int (*get_print(char s))(va_list, flags_t *);


/* write_funcs */

int _putchar(char c);
int _puts(char *str);

/* get_flag */

int get_flag(char s, flags_t *f);
