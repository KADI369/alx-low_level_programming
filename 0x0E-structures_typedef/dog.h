#ifndef _DOG_H_
#define _DOG_H_

/**
 *dog_t - typedef for struct dog
 */

typedef struct dog dog_t;



/**
 *struct dog - strut that describe a dog
 *@name: the dog name
 *@age: the dog age
 *@owner: the dog owner
 *
 * descrip: Header file that defines a new type struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
