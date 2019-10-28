#include "holberton.h"
/**
 * _putchar - print one character
 * @c: char
 *
 * Return: 1- if is fine or -1 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
