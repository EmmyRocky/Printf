#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void _puts(char *str);
int _strlen(char *s);
char *convert_to(char representation[], unsigned int num, int base);
int funct_mgr(char c, va_list arg);
int _switch(char c, va_list arg);
int print_character(va_list arg);
int print_sign(va_list arg, int base);
int print_unsign(va_list arg, int base);
int print_string(va_list arg);
int print_ptr(va_list arg);
int print_rot13(va_list arg);
int print_rev(va_list arg);
int print_base16_upper_lower(va_list arg, char *representation);
int loop_format(va_list arg, const char *string);
int call_funct_mgr(char aux, va_list arg);
int check_percent(int *flag, char aux);
int get_flag(char s, flags_t *f);

#endif /* MAIN_H */
