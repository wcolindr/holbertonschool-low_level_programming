#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - new type for my_dog
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
