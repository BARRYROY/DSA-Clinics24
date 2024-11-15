/******************************************************************
*  File:  encapsulation.c
*  
*  Function: int main.c
* 
*           In C encapsulation has been used for a long time despite absence of
*           key words public and private.
*           Encapsulation is not only limited to OOP languages
*
*  Copyright: This is an open source, common knowlege algorithm taught in college
*             Anyone can use it however they feel.
*
*  Author : Legacy_writes
*
*  Date : 2024-11-13 YYYY-MM-DD
*
******************************************************************/

#include "private_var.h"
#include <stdio.h>
#include <stdlib.h>


alienPtr registerAlien(){
    alienPtr newAlien = malloc(sizeof(Alien));

    newAlien->age = 10;
    newAlien->name = "Ben";

    return newAlien;
}

void deregisterAlien(alienPtr* registeredAlien){
    if(*registeredAlien != NULL){
        free(*registeredAlien);
        registeredAlien = NULL;
    }
}

void alienWalk(alienPtr alien, int distance){
    if(!alien->name){
        printf("No alien available to walk.\n");
    }else{
        printf("Distance walked by %s, aged %d, was estimated to be %d. \n", alien->name, alien->age, distance);
    }
}


void callAlien(alienPtr alien){
    if(!alien->name){
        printf("You cannot call alien. Alien does not exist.\n");
    }else{
        printf("Present!, %s replies.\n", alien->name);
    }
}
