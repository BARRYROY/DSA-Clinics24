#include <stdio.h>
#include "private_var.h"

alienPtr newAlien;

int main(){
    
    newAlien = registerAlien();
    /*We implimented the class register Alien, So we can call it and create a new instance of the class.*/
    newAlien->name = "legacy writes";
    newAlien->age = 10;

    printf("The name of the Alien is: %s\n ", newAlien->name);
    printf("The age of the Alien is: %d\n ", newAlien->age);

    alienWalk(newAlien, DISTANCE);

    callAlien(newAlien);

    deregisterAlien(&newAlien);

    alienWalk(newAlien, DISTANCE);

    callAlien(newAlien);

    return 0;
}
