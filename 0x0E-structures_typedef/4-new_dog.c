#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*new_dog - new struct
*@name: name
*@age: age
*@owner: owner
*
*Return: pointer to new_dog of type dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	(*ptr).name = malloc((strlen(name) + 1) * sizeof(char));
	if ((*ptr).name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	strcpy((*ptr).name, name);
	(*ptr).age = age;
	(*ptr).owner = malloc((strlen(owner) + 1) * sizeof(char));
	if ((*ptr).owner == NULL)
	{
		free((*ptr).owner);
		free(ptr);
		return (NULL);
	strcpy((*ptr).owner, owner);
	return (ptr);
}
