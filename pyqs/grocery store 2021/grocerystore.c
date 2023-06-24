#include "grocerystore.h"

struct item * readGroceryList(int count)
{
    struct item * gItems = (struct item *) malloc(sizeof(struct item)*count);
    int uniqNum = 1;
            
    for (int i = 0; i < count; i++)
    {
        gItems[i].ID = uniqNum++;
        printf("\nEnter details for item %d:\n",i+1);
        printf("Name:");
        scanf("%s",gItems[i].name);
        printf("Price:");
        scanf("%f",&gItems[i].price);
        printf("Quantity:");
        scanf("%d",&gItems[i].quantity);
    }

    return gItems;        
}

void printGroceryList(struct item * gItems, int count)
{
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        // printf("Item No %d: ",i);
        printf("Item ID: %d, ", gItems[i].ID);
        printf("Name: %s, ", gItems[i].name);
        printf("Price: %f, ", gItems[i].price);
        printf("Quantity: %d\n", gItems[i].quantity);
    }        
}

struct item findItem(int qVal, struct item * gItems, int count)
{
    int i = 0; int index = -1;
    while(i<count)
    {
        if(gItems[i].quantity == qVal)
        {
            index = i;
            return gItems[index];
        }            
        i++;
    }

    struct item emptyItem;
    emptyItem.ID = -1;
    return emptyItem;    
}

struct item findMaxPriceItem(struct item * gItems, int count)
{
    int maxIndex = -1;
    int maxPrice = -1;
    int i = 0;

    while(i<count)
    {
        if(gItems[i].price > maxPrice)
        {
            maxPrice = gItems[i].price;
            maxIndex = i;
        }
            
        i++;
    }

    return gItems[maxIndex];
}

// find

struct gLinkedList * createGLL(struct item * gItems, int count)
{
    struct gLinkedList * newList = (struct gLinkedList*) malloc(sizeof(struct gLinkedList));
    newList->first = NULL;
    newList->count = 0;

    for(int i = 0;i<count;i++)
    {
        if (i==0)
        {
            struct gNode * newNode = (struct gNode*) malloc(sizeof(struct gNode));
            newNode->gro_item = gItems[i];
            newNode->next = NULL;
            newList->first = newNode;
            newList->count++;
        }
        else
        {
            struct gNode * newNode = (struct gNode*) malloc(sizeof(struct gNode));
            newNode->gro_item = gItems[i];
            newNode->next = newList->first;
            newList->first = newNode;
            newList->count++;      
        }        
    }
    return newList;
}

void printGLinkedList(struct gLinkedList * newList)
{
    struct gNode * newNode = newList->first;
    while(newNode!=NULL)
    {
        printf("Item ID: %d, ", newNode->gro_item.ID);
        printf("Name: %s, ", newNode->gro_item.name);
        printf("Price: %f, ", newNode->gro_item.price);
        printf("Quantity: %d\n", newNode->gro_item.quantity);
        newNode = newNode->next;
    }
    return;    
}