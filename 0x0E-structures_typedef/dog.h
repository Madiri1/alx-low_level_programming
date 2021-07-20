#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 * struct dog - best friend of humankind
 * @name: doggo's name
 * @age: doggo's age
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* !DOG_H */
