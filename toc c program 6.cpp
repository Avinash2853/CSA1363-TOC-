#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if the string belongs to the language
bool isValid(const char* str) {
    int len = strlen(str);
    if (len % 2 != 0) return false; // Length must be even
    int half = len / 2;
    for (int i = 0; i < half; i++) {
        if (str[i] != '0') return false;
    }
    for (int i = half; i < len; i++) {
        if (str[i] != '1') return false;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    printf("The string %s the language defined by the CFG.\n", isValid(str) ? "belongs to" : "does not belong to");
    return 0;
}

