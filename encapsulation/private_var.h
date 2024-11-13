#ifndef PRIVATE_VAR
#define PRIVATE_VAR


typedef struct alien{
    int age;
    char* name;
}Alien;

typedef Alien* alienPtr;

alienPtr registerAlien();
void deregisterAlien(alienPtr);

#endif
