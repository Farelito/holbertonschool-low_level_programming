#include <stdio.h>
#include "dog.h"

/**
*print_dog - Prints information about a dog structure
*@d: Pointer to the dog structure to print
*This function prints the name, age, and owner of a dog structure.
*If any of the fields are NULL, it prints "(nil)" instead.
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
