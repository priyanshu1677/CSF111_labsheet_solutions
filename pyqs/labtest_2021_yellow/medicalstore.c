#include "medicalstore.h"

struct medicine * readMedicinesList(int count)
{
    struct medicine * mItems = (struct medicine *) malloc(sizeof(struct medicine)*count);
    int uniqNum = 1;
            
    for (int i = 0; i < count; i++)
    {
        mItems[i].ID = uniqNum++;
        printf("\nEnter details for Medicine %d:\n",i+1);
        printf("Name:");
        scanf("%s",mItems[i].name);
        printf("Price:");
        scanf("%f",&mItems[i].price);
        printf("Quantity:");
        scanf("%d",&mItems[i].quantity);
    }

    return mItems;        
}

void printMedicinesList(struct medicine * mItems, int count)
{
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        // printf("Item No %d: ",i);
        printf("Medicine ID: %d, ", mItems[i].ID);
        printf("Name: %s, ", mItems[i].name);
        printf("Price: %f, ", mItems[i].price);
        printf("Quantity: %d\n", mItems[i].quantity);
    }        
}

struct medicine findMedicine(float medPrice, struct medicine * mItems, int count)
{
    int i = 0; int index = -1;
    while(i<count)
    {
        if(mItems[i].price == medPrice)
        {
            index = i;
            return mItems[index];
        }            
        i++;
    }

    struct medicine emptyItem;
    emptyItem.ID = -1;
    return emptyItem;    
}

struct medicine findMinQuantityMedicine(struct medicine * mItems, int count)
{
    int minQuantity = 10000000;  
    int minIndex = -1;  
    int i = 0;

    while(i<count)
    {
        if(mItems[i].quantity < minQuantity)
        {
            minQuantity = mItems[i].quantity;
            minIndex = i;
        }
            
        i++;
    }

    return mItems[minIndex];
}

// find

struct mLinkedList * createMedLL(struct medicine * mItems, int count)
{
    struct mLinkedList * newList = (struct mLinkedList*) malloc(sizeof(struct mLinkedList));
    newList->first = NULL;
    newList->count = 0;

    for(int i = 0;i<count;i++)
    {
        if (i==0)
        {
            struct mNode * newNode = (struct mNode*) malloc(sizeof(struct mNode));
            newNode->med_item = mItems[i];
            newNode->next = NULL;
            newList->first = newNode;
            newList->count++;
        }
        else
        {
            struct mNode * newNode = (struct mNode*) malloc(sizeof(struct mNode));
            newNode->med_item = mItems[i];
            newNode->next = newList->first;
            newList->first = newNode;
            newList->count++;      
        }        
    }
    return newList;
}

void printMedLinkedList(struct mLinkedList * newList)
{
    struct mNode * newNode = newList->first;
    while(newNode!=NULL)
    {
        printf("Medicine ID: %d, ", newNode->med_item.ID);
        printf("Name: %s, ", newNode->med_item.name);
        printf("Price: %f, ", newNode->med_item.price);
        printf("Quantity: %d\n", newNode->med_item.quantity);
        newNode = newNode->next;
    }
    return;    
}