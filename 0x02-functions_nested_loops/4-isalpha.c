#include "main.h"

/**
 *  _isalpha - checks for alphabets
 *   @c: chracter to be checked
 *
 *   Return: 1 if character is a letter,0 otherwise
 */
int_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
