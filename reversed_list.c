/*Given the head of a linked list, return the list after sorting it in ascending order.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct linkList {
    int val;
    struct linkList* next;
}LinkedList;

LinkedList* merge(LinkedList* left, LinkedList* right);
LinkedList* mergeSort(LinkedList* head);
LinkedList* getMiddle(LinkedList* head);

LinkedList* sortLink(LinkedList* head)
{
    return mergeSort(head);
}

LinkedList* getMiddle(LinkedList* head)
{
    LinkedList* slow = head;
    LinkedList* fast = head;

    while(head != NULL && head->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

LinkedList* mergeSort(LinkedList* head)
{
    if(head == NULL || head->next ==NULL)
    {
        return head;
    }
    LinkedList* middle = getMiddle(head);
    LinkedList* nextToMId = middle->next;
    middle->next = NULL;
    LinkedList* left = mergeSort(head);
    LinkedList* right = mergeSort(nextToMId);
    return merge(left, right);

}

LinkedList* merge(LinkedList* left, LinkedList* right)
{
    LinkedList* result = NULL;

    if(left ==NULL)
    {
        return right;
    }
    if(right==NULL){return left;}

    if(left->val <= right->val)
    {
        result = left;
        result->next = merge(left->next, right);
    }else {
        result = right;
        result->next = merge(left, right->next);
    }
    return result;

}

void printList(LinkedList* head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

void freeList(LinkedList* head)
{
    while (head != NULL)
    {
        LinkedList* temp = head;
        head = head->next;
        free(temp);
    }
}

LinkedList* reverselist(LinkedList* head){
    /* we need to walk with a previous and next to store the values */
    LinkedList* prev = NULL;
    LinkedList* current = head;
    LinkedList* next = NULL;

    while(current !=NULL){ 
        next = current->next;
        current->next = prev;
        prev =current;
        current = next;

    }
    head = prev;
    return head;

} 

int main()
{
    LinkedList* head = (LinkedList*)malloc(sizeof(LinkedList));
    head->val = -1;
    head->next = (LinkedList*)malloc(sizeof(LinkedList));
    head->next->val = 10;
    head->next->next = (LinkedList*)malloc(sizeof(LinkedList));
    head->next->next->val = 3;

    printf("Original List: ");
    printList(head);
    LinkedList* original_head =NULL;
    original_head =head;

    LinkedList* reversed_list = reverselist(head);
    printf("reversed List: ");
    printList(reversed_list);
    
    LinkedList* sortedList = sortLink(original_head);

    printf("Sorted List: ");
    printList(sortedList);

    freeList(sortedList);

    return 0;
}