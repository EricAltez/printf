#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_char - Funcion que imprime caracter.
 * @lista: lista de argumentos
 * Return: numero de caracteres impresos
 */
int print_char(va_list lista)
{
	int cuenta = 0;
	int ch;

	ch = va_arg(lista, int);
	_putchar(ch);
	cuenta++;
	return (cuenta);
}
/**
 * print_string - Funcion que imprime strig.
 * @lista: lista de argumentos
 * Return: numero de caracteres impresos
 */
int print_string(va_list lista)
{
	int i = 0;
	int cuenta = 0;
	char *p;

	p = va_arg(lista, char*);
	if (!p)
		p = "(null)";
	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
		cuenta++;
	}
	return (cuenta);
}
/**
 *conv_dig - convierte de ASCII a int
 *@i: digito a convertir
 *Return: numero de digitos impresos.
 */
int conv_dig(int i)
{
	unsigned int aux = 0;
	int cuenta = 0;

	if (i < 0)
	{
		_putchar('-');
		cuenta++;
		aux = -i;
	}
	else
		aux = i;

	if (aux / 10)
	{
		cuenta += conv_dig(aux / 10);
	}
	_putchar((aux % 10) + '0');
	cuenta++;
	return (cuenta);
}
/**
 *print_digit - imprime digitos
 *@lista: lista de argumentos
 *Return: digitos impresos
 */
int print_digit(va_list lista)
{
	int i = va_arg(lista, int);

	return (conv_dig(i));
}
