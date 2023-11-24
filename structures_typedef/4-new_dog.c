#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog, or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
{
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);
new_dog_ptr->name = NULL;
new_dog_ptr->owner = NULL;
new_dog_ptr->age = 0.0;
}
else
{
new_dog_ptr->name = strdup(name);
new_dog_ptr->owner = strdup(owner);
if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr->owner);
free(new_dog_ptr);
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);
new_dog_ptr->name = NULL;
new_dog_ptr->owner = NULL;
new_dog_ptr->age = 0.0;
}
else
{
new_dog_ptr->age = age;
}
}
return (new_dog_ptr);
}
