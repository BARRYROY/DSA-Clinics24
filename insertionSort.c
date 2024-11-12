/******************************************************************
*  File:  InsertionSort.c
*  
*  Function: This is an insertion algorithm in C when we pass an array and it's size
*
*  Copyright: This is an open source, common knowlege algorithm taught in college
*             Anyone can use it however they feel.
*
*  Author : Legacy_writes
******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE  1000
#define SIZE    6

void insertionSort(int *Array, int ArraySize){
    int j = 0;
    int i = 0;
    int key = 0;

    for(j = 1 ; j < ArraySize; j++){
        key = Array[j];
        i = j - 1;
        while(i >= 0 && Array[i] > key){
            Array[i + 1] = Array[i];
            i--;
        }
        Array[i + 1] = key;

    }
}

void printArray(int* Array, int arraySize){
    for(int i = 0; i < arraySize; i++){
        printf("the value of array: %d\n", Array[i]);
    }
}

void insertion(int* A, int Siz){
    int i , key = 0;
    for(int j = 1; j < Siz; j++){
        key = A[j];
        i = j - 1;
        while(i >= 0 && A[i] > key){
            A[i+1] = A[i];
            i--;
        }
        A[i+ 1] = key;
    }
}

void insertionOppos(int* A, int Siz){
    int i, key, j = 0;
    for(j = 1; j < Siz; j++){
        key = A[j];
        i = j-1;
        while(i>=0 && A[i] < key){
            A[i + 1] = A[i];
            i--;
        }
        A[i+ 1] = key;
    }
}

/*Consider the searching problem:
Input: A sequence of n numbers A = a1,a2,:::;an  and a value v.
Output: An index i such that v = A[n] or the special value NIL if v does not
appear in A. */
void searcV(int *A, int numSize, int v){
    int j, i, key, found = 0;
    for(j = 0; j< numSize; j++){
        if(A[j] == v){
            found = 1;
            printf("found %d\n", j);
            return;
        }
    }
    if(!found){
        printf("not found\n");
    }

}


int main() {

    int A[SIZE] = {5,2,4,6,1,3};
    int D[SIZE] = {31, 41,59, 26, 41, 58};

    

    insertion(D, SIZE);
    printf("Array sorting Incerasingly\n");
    printArray( D, SIZE);
    insertionOppos(D, SIZE);
    printf("Array sorting Decreasingly\n");
    printArray(D, SIZE);
    searcV(D, SIZE, 4);
    searcV(A, SIZE, 4);

    return 0;
}


/*TODO: impliment the same algorithm using a linked list */