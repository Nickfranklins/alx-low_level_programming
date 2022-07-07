#include "main.h"
/**
 * Print alphabets 10 times in lower case
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char b;

	while (i<10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n')
			i++;
	}
}
