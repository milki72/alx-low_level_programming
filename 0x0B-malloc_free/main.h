#ifndef MAIN_H
		
#define MAIN_H
		

		
char *create_array(unsigned int size, char ch);
		
int _putchar(char ch);
		
char *_strdup(char *strn);
		
char *str_concat(char *st1, char *st2);
		
int **alloc_grid(int width, int height);
		
void free_grid(int **grid, int height);
		
char *argstostr(int arc, char **arv);
		
char **strtow(char *strn);
		
#endif
