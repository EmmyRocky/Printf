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

/* converter */

char *convert(unsigned long int num, int base, int lowercase);

/* print_custom */

int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
