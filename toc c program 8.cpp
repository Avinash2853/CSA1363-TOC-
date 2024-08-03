#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if the string belongs to the language defined by the CFG
bool belongsToLanguage(const char* str) {
    // Check if the string is empty (e is valid)
    if (strlen(str) == 0) return true;

    // Check if all characters in the string are 'a'
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != 'a') return false;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);

    if (belongsToLanguage(str)) {
        printf("The string belongs to the language defined by the CFG.\n");
    } else {
        printf("The string does not belong to the language defined by the CFG.\n");
    }

    return 0;
}

