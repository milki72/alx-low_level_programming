#include <stdio.h>
		
#include <stdlib.h>
		
#include "main.h"
		
/**
		
 * _str_dup - duplicate to new memory space location
		
 * @strn: char
		
 * Return: 0
		
 */
		
char *_str_dup(char *strn)
		
{
		
	char *aa;
		
	int i, j = 0;
		

		
	if (strn == NULL)
		
		return (NULL);
		
	i = 0;
		
	while (strn[i] != '\0')
		
		i++;
		

		
	aa = malloc(sizeof(char) * (i + 1));
		

		
	if (aa == NULL)
		
		return (NULL);
		

		
	for (j = 0; strn[j]; j++)
		
		aa[j] = strn[j];
		

		
	return (aa);
		
}

