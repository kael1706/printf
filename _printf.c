#include "holberton.h"
/**
* f_controller - function controller
* @cs: conversion specifier
* Return: 1 or -1
*/
int (*f_controller(char cs))(va_list)
{
	int i = 0;
	managerF managerArr[] = {
		{'c', f_char},
		{'i', f_int},
		{'d', f_int},
		{'s', f_string},
		{'\0', fe_1}};

	while (managerArr[i].cs != '\0')
	{
		if (cs == managerArr[i].cs)
			return (managerArr[i].f);
		i++;
	}
	if (cs == '\0')
	{
		return (fe_1);
	}
	else
	{
		_putchar('%');
		_putchar(cs);
		return (fe_2);
	}
}
/**
* _printf - print values
* Description: twin of prinft
* @format: text and/or format of values
* @...: values
*
* Return: length of: values and text
*/
int _printf(const char *format, ...)
{
	long int i = 0, count = 0;
	va_list vl;

	if (format == NULL)
		return (-1);
	va_start(vl, format);
	while (format && format[i] != '\0')
	{
		long int next = i + 1;

		if ('%' == format[i])
		{
			if ('\0' == format[next])
				return (-1);
			else if ('%' == format[next])
			{
				_putchar('%'), i++, count++;
			}
			else
			{
				count += f_controller(format[next])(vl);
				i++;
			}
		}
		else
		_putchar(format[i]), count++;
		i++;
	}
	va_end(vl);
	return (count);
}
