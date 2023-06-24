#include <stdio.h>

int main() {
    char mail[100];
    
    printf("Enter your email address: ");
    scanf("%s", mail);
    
    char user[100] = "";
    int i = 0;
    while (mail[i] != '@' && mail[i] != '\0') {
        user[i] = mail[i];
        i++;
    }
    
    printf("%s\n", user);
    
    return 0;
}

