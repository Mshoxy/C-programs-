/*
name : maxwell gachoka 
reg no :CT101/G/25371/24
subject:password
*/
#include <stdio.h>

int main() {
    int password;
    do {
        printf("Enter password: ");
        scanf("%d", &password);
        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }
    } while (password != 1234);
    printf("Access Granted.\n");
    return 0;
}