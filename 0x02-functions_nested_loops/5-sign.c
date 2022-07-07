#include "main.h"
/**
 * print_sign - print the sign of a given number
 * @n: type of in integer. this can take both negative and positive values
 * Description: print +, 0, or -   depending on the number
 * Return: return 1 is +, return 0 if 0, return -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

