#ifndef DOG
#define DOG

/**
* struct dog - stucture named dog
* description - basic info of struct dog
*@name: first member as string
*@age: Second member as float
*@owner: Third member as stringn
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 *dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
