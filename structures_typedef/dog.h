#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog (a string).
 * @age: The age of the dog (a floating-point number).
 * @owner: The owner of the dog (a string).
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
