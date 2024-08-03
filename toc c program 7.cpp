#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if the string follows the pattern A101A
bool checkPattern(const char* str) {
    int len = strlen(str);

    // The length must be at least 3 (for "101") and should be greater than or equal to 5 to fit "A101A"
    if (len < 5) return false;

    // Find the position of "101"
    // "101" should be present at the center of the string
    if (str[len / 2 - 1] == '1' && str[len / 2] == '0' && str[len / 2 + 1] == '1') {
        // Check if the prefix and suffix around "101" are any combination of 0s and 1s
        for (int i = 0; i < len / 2 - 1; i++) {
            if (str[i] != '0' && str[i] != '1') return false;
        }
        for (int i = len / 2 + 2; i < len; i++) {
            if (str[i] != '0' && str[i] != '1') return false;
        }
        return true;
    }

    return false;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);

    if (checkPattern(str)) {
        printf("The string belongs to the language defined by the CFG.\n");
    } else {
        printf("The string does not belong to the language defined by the CFG.\n");
    }

    return 0;
}

