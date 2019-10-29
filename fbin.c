#include "holberton.h"

/**
  * f_bin - print boolean
  * @vl: boolean inside valist
  * Return: number of digits
  */
int f_bin(va_list vl)
{
	unsigned int resd[50];
	unsigned int  decimal, n = 0, h, m;

	decimal = va_arg(vl, int);

	if (decimal < 1)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		for (h = 0; decimal > 0; h++)
		{
			resd[h] = decimal % 2;
			decimal = decimal / 2;
		}
		resd[h] = decimal % 2;
		for (m = h - 1; m > 0; m--)
		{
			_putchar(resd[m] + '0');
			n++;
		}
		n++;
		_putchar(resd[m] + '0');
	}
	return (n);
}
