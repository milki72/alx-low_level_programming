#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @st: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *st)
{
	int flag, ch, wrd;

	flag = 0;
	wrd = 0;

	for (ch = 0; st[ch] != '\0'; ch++)
	{
		if (st[ch] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			wrd++;
		}
	}

	return (wrd);
}
/**
 * **strtow - splits a string into words
 * @strn: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *strn)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, ch = 0, start, end;

	while (*(strn + len))
		len++;
	words = count_word(strn);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (strn[i] == ' ' || strn[i] == '\0')
		{
			if (ch)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (ch + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = strn[start++];
				*tmp = '\0';
				matrix[k] = tmp - ch;
				k++;
				ch = 0;
			}
		}
		else if (ch++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
