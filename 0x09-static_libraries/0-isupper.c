#include "main.h"
/**
 * _isupper -do uppercase letters
 * @ch: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
