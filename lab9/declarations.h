struct student{
    int ID;
    char Name[25];
    int Marks[5];
    float Avg;
} arr[30];

void askData(int n,struct student *arr);
void displayData(int n,struct student *arr);
