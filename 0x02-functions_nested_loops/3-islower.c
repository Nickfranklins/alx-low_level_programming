#include "main.h"
/**
 * program to check if character is lower case
 * Retun: 1 is lower case, 0 if not 
 */
int _islower(int m)
{
	if (m > 96 && m < 123)
		return (1);
	else
		return (0);
}
