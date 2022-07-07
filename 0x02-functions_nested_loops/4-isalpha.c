#include "main.h"
/**
 * _isalpha - Check if Character is an alphabetic charcter
 * @m: type into character
 * Return: Return 1 if character is letter, lowercase or upper case, Retun 0 if otherwise
 */
int _isalpha(int m)
{
	if ((m > 64 && m < 91) || (m > 96 && m < 123))
		return (1);
	else
		return (0);
}
