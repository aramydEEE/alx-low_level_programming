#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A data structure
 * @name: 1st variable
 * @owner: 2nd variable
 * @age: 3rd variable
 * dog_t - typedef for struct dog
 */
struct dog
{
	char *name, *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
void free_dog(dog_t *d);
#endif
