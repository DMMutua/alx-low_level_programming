#ifdef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, *owner);

#endif
