#include <stdio.h>
#include <ctype.h>

int main() {
    int size, i = 0;
    char name[50];
    
    printf("Enter a name: ");
    scanf("%c", &name[0]);
    
    while (name[i] != '\n') {
        i++;
        scanf("%c", &name[i]);
    }
    
    name[i] = '\0';
    size = i;
    
    printf("\nName is %s\n", name);
    
    for (i = 0; i < size; i++) {
        printf("%c", toupper(name[i]));
    }
    
    return 0;
}
