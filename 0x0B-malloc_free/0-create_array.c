#include "main.h"
		
#include <stdlib.h>
		
/**
		
 * crtd_ary - create array of size size and assign char ch
		
 * @size: size of array
		
 * @ch: char to assign
		
 * Description: creat array of size size and assign char ch
		
 * Return: pointer to array, NULL if fail
		
 *
		
 */
		
char *crtd_ary(unsigned int size, char ch)
		
{
		
	char *strn;
		
	unsigned int i;
		

		
	strn = malloc(sizeof(char) * size);
		
	if (size == 0 || strn == NULL)
		
		return (NULL);
		

		
	for (i = 0; i < size; i++)
		
		strn[i] = ch;
		
	return (strn);
		
}
