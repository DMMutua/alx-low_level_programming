#include "dog.h"

/**
 * new_dog - a function that creates a new dog (variable) of
 * user defined type dog_t
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the created variable
 *
 * Return: pointer to the address of the new dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; i++)
		;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (j + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);

		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (j = 0; owner[j] != '\0'; j++)
		dog->owner[j] = owner[j];
	dog->owner[j] = '\0';

	return (dog);
}
