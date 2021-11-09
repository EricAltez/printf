#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *_printf - funcion principal
 *@format: datos ingresados
 *Return: numero de impresiones
 */
int _printf(const char *format, ...)
{
	va_list lista;
	int pos = 0, conteo = 0, (*fun)(va_list);

	va_start(lista, format);
	if (!format)
		return (-1);
	for (pos = 0; format[pos]; pos++)
	{
		if (format[pos] == '%')
		{
			if (!format[pos + 1])
				return (-1);
			if (format[pos + 1] == '%')
			{
				_putchar('%');
				pos++;
				conteo++;
				continue;
			}
			else
			{
				fun = selector_funciones(format[pos + 1]);
				if (fun)
					conteo += fun(lista);
				else
				{
					_putchar(format[pos + 1]);
					pos++, conteo++;
				}
			}
		}
		else
		{
			_putchar(format[pos]);
			conteo++;
		}
	}
	va_end(lista);
	return (conteo);
}
