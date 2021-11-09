#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *estructura1 - usada para definir formato
 *@o: operador
 *@f: lista de funciones asociadas
 */

typedef struct estructura1
{
	char *o;
	int (*f)(va_list argumentos);
}estructura1;

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
int (*selector_funciones(char o))(va_list f);
int print_char(va_list lista);
int print_string(va_list lista);
int conv_dig(int i);
int print_digit(va_list lista);
#endif
