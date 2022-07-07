#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int nval;
	if (n < 0)
	{
		nval = -1 * (n % 10);
		_putchar (nval + '0');
		retun (nval);
	}
	else
	{
		nval =  n % 10;
		_putchar(nval + '0');
		return (nval);
	}
}
