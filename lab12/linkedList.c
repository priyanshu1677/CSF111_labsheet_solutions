#include "linkedList.h"

void printNode(NODE n1){
    printf("%d ", n1->ele);
}

void printList(LIST l1){
    NODE temp = l1->head;
    while (temp != NULL) {
        printNode(temp);
        temp = temp->next;
    }
    printf("\n");
}

LIST createNewList(){
	LIST myList;
    myList = (LIST)malloc(sizeof(struct linked_list));
    // myList = (LIST) malloc(sizeof(*myList));
    myList->count = 0;
    myList->head = NULL;
    return myList;
}

NODE createNewNode(int value){
	NODE myNode;
    myNode = (NODE)malloc(sizeof(struct node));
    // myList = (NODE) malloc(sizeof(*myNode));
    myNode->ele = value;
    myNode->next = NULL;
    return myNode;
}

void insertNodeIntoList(NODE n1, LIST l1){
	// case when list is empty
    if (l1->count == 0)
    {
        l1->head = n1;
        n1->next = NULL;
        l1->count++;
    }
    // case when list is non empty
    else
    {
        n1->next = l1->head;
        l1->head = n1;
        l1->count++;
    }
}

void insertNodeAtEnd(NODE n1, LIST l1){
    // case when list is empty
    if (l1->count == 0)
    {
        l1->head = n1;
        n1->next = NULL;
        l1->count++;
    }
    // case when list is non empty
    else
    {
        NODE temp = l1->head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n1;
        n1->next = NULL;
        l1->count++;
    }
}

NODE search(LIST l1, int value){
    NODE temp = l1->head;
    while (temp != NULL) {
        if (temp->ele == value)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

void insertAfter(int searchEle, NODE n1, LIST l1){
     // case when list is empty
    if (l1->count == 0)
    {
        l1->head = n1;
        n1->next = NULL;
        l1->count++;
    }
    // case when list is non-empty
    else
    {
        NODE temp = l1->head;
        NODE prev = temp;
        while (temp != NULL)
        {
            if (temp->ele == searchEle)
                break;
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            printf("Element not found\n");
            return;
        }
        else
        {
            if (temp->next == NULL)
            {
                temp->next = n1;
                n1->next = NULL;
                l1->count++;
            }
            else
            {
                prev = temp;
                temp = temp->next;
                prev->next = n1;
                n1->next = temp;
                l1->count++;
            }
            return;
        }
    }
    return;
}

void removeFirstNode(LIST l1){
    if (l1->count == 0) {
        printf("List is empty. Nothing to remove.\n");
        return;
    }
    
    NODE temp = l1->head;
    l1->head = temp->next;
    free(temp);
    l1->count--;
}

void removeLastNode(LIST l1){
    if (l1->count == 0) {
        printf("List is empty. Nothing to remove.\n");
        return;
    }
    
    NODE temp = l1->head;
    NODE prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    
    if (prev == NULL) {
        l1->head = NULL;
    } else {
        prev->next = NULL;
    }
    
    free(temp);
    l1->count--;
}

void removeElem(int value, LIST l1){
    if (l1->count == 0) {
        printf("List is empty. Nothing to remove.\n");
        return;
    }
    
    NODE temp = l1->head;
    NODE prev = NULL;
    
    // Traverse the list to find the node to be removed
    while (temp != NULL && temp->ele != value) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Element not found in the list.\n");
        return;
    }
    
    // Adjust the pointers to remove the node
    if (prev == NULL) {
        l1->head = temp->next;
    } else {
        prev->next = temp->next;
    }
    
    free(temp);
    l1->count--;
}
