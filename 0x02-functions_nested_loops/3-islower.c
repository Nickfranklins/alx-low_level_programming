#include "main.h"
/**
 * _islower - program to check if character is lower case
 * @c: char type letter
 * Retun: 1 is lower case, 0 if not 
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
