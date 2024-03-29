#ifndef _HEADER_
#define _HEADER_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a dog basic info
 * @name: First member
 * @age: Second structure member
 * @owner: Third STRUCTURE member
 *
 * Description: Long
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
