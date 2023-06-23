#include <stdio.h>
void f1(char *str)
{
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int strlen = 0, vow = 0;
    for (int i = 0;; i++)
    {
        char key = *(str + i);

        if (key != '\0')
            strlen++;

        for (int j = 0; j < 10; j++)
        {
            if (key == vowels[j])
                vow++;
        }

        if (key == '\0')
            break;
    }
    printf("Vowels= %d Consonants= %d\n", vow, strlen - vow);
}
int main()
{
    char ch[25];
    printf("Enter your string\n");
    scanf("%s", ch);
    f1(ch);
    return 0;
}