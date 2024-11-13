#include <stdio.h>
#include "private_var.h"

int main(){

    alienPtr newAlien;
    newAlien = registerAlien();

    printf("The name of the Alien is: %s\n ", newAlien->name);
    printf("The age of the Alien is: %d\n ", newAlien->age);

    deregisterAlien(newAlien);

    return 0;
}
