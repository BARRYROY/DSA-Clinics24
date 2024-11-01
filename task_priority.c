#include <stdio.h>
#include <stdlib.h>


typedef struct prioroti{
    char* task;
    int data;
}Prioriti;

Prioriti * PrioritiPtr;

int comparePriority(const void *a, const void *b) {
    Prioriti *taskA = (Prioriti *)a;
    Prioriti *taskB = (Prioriti *)b;
    return taskA->data - taskB->data; // Ascending order
}

// Function to sort tasks by priority
void solve(Prioriti* priorities, int size) {
    qsort(priorities, size, sizeof(Prioriti), comparePriority);
}



int main(){

    Prioriti priorities[] = {{"task1", 2}, {"task2", 1}, {"task3", 3} } ;

   int size = sizeof(priorities) / sizeof(priorities[0]);

    solve(priorities, size);

    printf("The tasks in priority order\n");

    for(int i=0; i < size; i++){
        printf("%s with order %d \n", priorities[i].task, priorities[i].data);
    }

    return 0;
}