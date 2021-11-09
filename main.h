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
	char o;
	int (*f)(va_list argumentos);
}estructura1;

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
int (*selector_funciones(char o))(va_list f);

#endif
