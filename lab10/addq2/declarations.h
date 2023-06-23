#define MAX 20

struct employee
{
    int ID;
    float salary;
    char division[25];
};
struct employee employeeData[MAX];
struct employee *employeeDataPointers[MAX];

void sortData(struct employee *arr[], int n);