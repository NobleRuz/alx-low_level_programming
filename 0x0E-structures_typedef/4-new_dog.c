#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create new data structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: Pointer to new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name, len_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	len_name = _strlen(name);
	new_dog->name = malloc(sizeof(char) * len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);

