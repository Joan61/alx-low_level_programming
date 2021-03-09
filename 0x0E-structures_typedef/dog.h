#ifndef DOG_H
#define DOG_H

/**
*struct dog - for a dogs biodata
*@name: first member
*@age: second member
*@owner: third member
*Description: collect bio data
**/

struct dog
{
  char *name;
  float age;
  char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner)
{
  if (d != NULL)
    {
      d->name = name;
      d->age = age;
      d->owner = owner;
    }
}
