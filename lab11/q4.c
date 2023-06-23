#include<stdio.h>
#include<stdlib.h>

struct student{
    int ID;
    char Name[25];
    char Dept[15];
    int math_marks;
    int phy_marks;
    int chem_marks;
};

void fun3(struct student *p,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+i;j<n;j++){
            if(p[j].math_marks<p[i].math_marks){
                struct student temp= p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}

int main(){
    int k;
    printf("Enter the no. of students\n");
    scanf("%d",&k);
    struct student *ptr= (struct student*) malloc( k*sizeof(struct student));
    for(int i=0;i<k;i++){
        printf("\nEnter student_%d's Data\n",i+1);
        printf("ID:\t");
        scanf("%d",ptr[i].ID);
        printf("Name:\t");
        scanf("%s",ptr[i].Name);
        printf("Dept:\t");
        scanf("%s",ptr[i].Dept);
        printf("Math marks:\t");
        scanf("%d",ptr[i].math_marks);
        printf("Phy marks:\t");
        scanf("%d",ptr[i].phy_marks);
        printf("Chem marks:\t");
        scanf("%d",ptr[i].chem_marks);
    }
    fun3(ptr,k);
    for(int i=0;i<k;i++){
        printf("ID:\t",ptr[i].ID);
        printf("Name:\t",ptr[i].Name);
        printf("Dept:\t",ptr[i].Dept);
        printf("Math marks:\t",ptr[i].math_marks);
        printf("Phy marks:\t",ptr[i].phy_marks);
        printf("Chem marks:\t",ptr[i].chem_marks);
    }    
}