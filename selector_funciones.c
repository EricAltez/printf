#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
*selector_funciones - selecciona funcion corr. al operador recibido
*@o: operador recibido
*Return: Direccion de la funcion.
*/

int (*selector_funciones(char *o))(va_list f)
{
	estructura1 selectorf[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_digit},
		{"i", print_digit},
		{NULL, NULL}
	};
	int i = 0;

	while (selectorf[i].o)
	{
		if (o == selectorf[i].o)
		{
			return (selectorf[i].f);
		}
		i++;
	}
	return (NULL);
}
