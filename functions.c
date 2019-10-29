#include "holberton.h"
/**
* fe_2 - add 2
* @vl: unused valist
* Return: 2
*/
int fe_2(va_list vl)
{
	(void)vl;
	return (2);
}

/**
 * fe_1 - print -1 for indicate error
 * @vl: unused valist
 * Return: -1
 */
int fe_1(va_list vl)
{
	(void)vl;
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
