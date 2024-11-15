#ifndef PRIVATE_VAR
#define PRIVATE_VAR

#define DISTANCE 40

typedef struct alien{
    int age;
    char* name;
}Alien;

typedef Alien* alienPtr; /* constructor in a way */

/* Methods */
alienPtr registerAlien();
void deregisterAlien(alienPtr*);
void alienWalk(alienPtr, int);
void callAlien(alienPtr);

#endif
