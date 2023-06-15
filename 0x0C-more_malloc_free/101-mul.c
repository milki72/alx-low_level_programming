#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @st: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *st)
{
	int i = 0;

	while (st[i])
	{
		if (st[i] < '0' || st[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @st: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *st)
{
	int i = 0;

	while (st[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc_num: number of arguments
 * @argv_num: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc_num, char *argv_num[])
{
	char *st1, *st2;
	int len1, len2, len, i, carry, digit1, digit2, *result, j = 0;

	st1 = argv_num[1], st2 = argv_num[2];
	if (argc_num != 3 || !is_digit(st1) || !is_digit(st2))
		errors();
	len1 = _strlen(st1);
	len2 = _strlen(st2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = st1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(st2) - 1; len2 >= 0; len2--)
		{
			digit2 = st2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			j = 1;
		if (j)
			_putchar(result[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
