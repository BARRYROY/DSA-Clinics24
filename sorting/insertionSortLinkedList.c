/******************************************************************
*  File:  InsertionSort.c
*  
*  Function: This is an insertion sort algorithm in C when we pass an array and it's size
*
*  Copyright: This is an open source, common knowlege algorithm taught in college
*             Anyone can use it however they feel.
*
*  Author : Legacy_writes
*
*  Date : 2024-11-12 YYYY-MM-DD
*
******************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct listNode;
typedef struct listNode ListNode;
typedef ListNode* listNodePtr;

typedef struct listNode{
    int val;
    listNodePtr next;
}ListNode;

listNodePtr insertionSort(listNodePtr head);
void prntList(listNodePtr head);

int main(){
    listNodePtr node1 = malloc(sizeof(ListNode));
    listNodePtr node2 = malloc(sizeof(ListNode));    
    listNodePtr node3 = malloc(sizeof(ListNode));
    listNodePtr sortedList = malloc(sizeof(ListNode));
    node1->val = 6;
    node2->val = 5;
    node3->val = 8;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    sortedList =  insertionSort(node1);
    prntList(sortedList);

    listNodePtr current = sortedList;
    while (current != NULL) {
        listNodePtr temp = current;
        current = current->next;
        free(temp);
    }
    return 0;

}

void prntList(listNodePtr head){

    while(head !=NULL){
        printf("the val is %d\n", head->val);
        head = head->next;
    }
}

listNodePtr insertionSort(listNodePtr head){
    listNodePtr temp = malloc(sizeof(ListNode));
    temp->next = NULL;
    listNodePtr current = head;

    while(current != NULL ){
        listNodePtr traverse = temp;
        listNodePtr nextPtr = current->next;

        while(traverse->next != NULL && traverse->next->val < current->val ){
            traverse = traverse->next;

        }

        current->next = traverse->next;
        traverse->next = current;
        current = nextPtr;

    }
    listNodePtr sortedHead = temp->next;
    free(temp);  // Free dummy node
    return sortedHead;

}
