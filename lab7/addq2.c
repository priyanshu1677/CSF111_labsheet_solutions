#include <stdio.h>
#include <stdlib.h>
void evaluate(int totalques, char correctkeys[])
{
    int i, marks = 0;
    char name[20], response[totalques], t;
    printf("\nEnter the name of the student:\n");
    scanf("%s", name);
    printf("Enter student's response:\n");
    printf("Please enter 'u' if unattempted!\n");
    scanf("%s", response);
    for (i = 0; i < totalques; i++)
    {
        if (response[i] == correctkeys[i])
        {
            marks++;
        }
    }
    printf("Marks obtained by %s is %d\n", name, marks);

    while (1)
    {
        printf("\nDo you want to evaluate another student(Y/N)?\n");
        // scanf("%c",&t);
        getchar();
        t = getchar();
        if (t == 'Y')
            evaluate(totalques, correctkeys);
        if (t == 'N')
        {
            printf("Good Bye!\n");
            exit(0);
        }
    }
}
int main()
{
    int totalques, i;

    printf("Enter the number of questions:\n");
    scanf("%d", &totalques);
    char correctkeys[totalques], t;

    printf("Enter correct keys to the quiz:\n");
    // for(i=0;i<totalques;i++){
    //     scanf("%c",&correctkeys[i]);
    // }
    scanf("%s", correctkeys);

    evaluate(totalques, correctkeys);
    return 0;
}