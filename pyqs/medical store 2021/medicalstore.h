#ifndef __STORE_H
#define __STORE_H

#include <stdio.h>
#include <stdlib.h>

struct medicine
{
    int ID;
    char name[50];
    float price;
    int quantity;
};

struct mNode
{
    struct medicine med_item;
    struct mNode * next;
};

struct mLinkedList
{
    int count;
    struct mNode * first;
};

struct medicine * readMedicinesList(int count);
void printMedicinesList(struct medicine * mItems, int count);
struct medicine findMedicine(float medPrice, struct medicine * mItems, int count);
struct medicine findMinQuantityMedicine(struct medicine * mItems, int count);
struct mLinkedList * createMedLL(struct medicine * mItems, int count);
void printMedLinkedList(struct mLinkedList * newList);

#endif