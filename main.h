#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct prt
{
	char por;
	int (*fun)(va_list argumentos);
}prt;

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);

#endif
