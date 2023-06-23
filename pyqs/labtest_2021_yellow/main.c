#include "medicalstore.h"

int main()
{
    int num_meds;
    printf("Enter number of unique medicines in the store:");
    scanf("%d",&num_meds);
    struct medicine * mItems = readMedicinesList(num_meds);

    printMedicinesList(mItems,num_meds);

    float pVal;
    printf("\nEnter the Price of the Medicine you wish to find: ");
    scanf("%f",&pVal);
    struct medicine fmed= findMedicine(pVal,mItems,num_meds);
    if(fmed.ID == -1)
        printf("\nMedicine Not Found!\n\n");
    else
    {
        printf("\nThe first medicine found with price %f is:\n", pVal);
        printf("Medicine ID: %d, ", fmed.ID);
        printf("Name: %s, ", fmed.name);
        printf("Price: %f, ", fmed.price);
        printf("Quantity: %d\n\n", fmed.quantity);
    }        

    struct medicine minItem = findMinQuantityMedicine(mItems,num_meds);
    printf("\nThe medicine with minimum quantity is:\n");
    printf("ID: %d, ", minItem.ID);
    printf("Name: %s, ", minItem.name);
    printf("Price: %f, ", minItem.price);
    printf("Quantity: %d\n\n", minItem.quantity);

    struct mLinkedList * medLL = createMedLL(mItems,num_meds);
    printf("Printing the Linked List created:\n");
    printMedLinkedList(medLL);
}