#include <stdio.h>
/**
 * struct dog - Structure for a dog
 * @name: Pointer to name string
 * @age: Age of the dog
 * @owner: Pointer to owner string
 *
 * Description: This structure represents a dog, with a name,
 * age, and owner's name.
 */

typedef struct dog {
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner) {
	d->name = name;
	d->age = age;
	d->owner = owner;
}

int main() {
	dog_t my_dog;
	init_dog(&my_dog, "Rufus", 3.5, "John");

	printf("Dog's name: %s\n", my_dog.name);
	printf("Dog's age: %.1f\n", my_dog.age);
	printf("Owner's name: %s\n", my_dog.owner);

	return 0;
}

