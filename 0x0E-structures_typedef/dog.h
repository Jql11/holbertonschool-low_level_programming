#ifndef DOG_H
#define DOG_H
/**
  * struct dog - define
  *@name: char pointer
  *@age: float
  *@owner: char pointer
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
#endif

