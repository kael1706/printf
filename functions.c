#include "holberton.h"
/**
 * fe_1 - print -1 for indicate error
 * @vl: unused valist
 * Return: -1
 */
int fe_1(va_list vl)
{
	return (-1);
}
/**
 * f_char - print char
 * @vl: char inside valist
 * Return: 1
 */
int f_char(va_list vl)
{
	char c;

	c = (char)va_arg(vl, int);
	_putchar(c);
	return (1);
}
