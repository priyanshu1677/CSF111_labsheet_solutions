#include <stdio.h>

int main() {
    char original[100];
    char result[100] = "";
    
    printf("Enter a string: ");
    scanf("%s", original);
    
    int i = 0;
    while (original[i] != '\0') {
        if (original[i] == 'e') {
            char replace[] = "i";
            int j = 0;
            while (replace[j] != '\0') {
                result[i+j] = replace[j];
                j++;
            }
        } else {
            result[i] = original[i];
        }
        i++;
    }
    
    result[i] = '\0';
    
    printf("Result: %s\n", result);
    
    return 0;
}

