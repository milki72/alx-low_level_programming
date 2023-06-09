#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure tag
 * @name: member1 of a structure
 * @age: member2 of a structure
 * @owner: member3 of a structure
 * my_dog: structure variable
 */

struct dog
{

	char *name;
	float  age;
	char *owner;

};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
