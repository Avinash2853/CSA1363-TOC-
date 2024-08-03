#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if the string follows the CFG rules
bool checkString(const char *str) {
    int len = strlen(str);
    int left = 0, right = len - 1;

    // Count leading and trailing zeros
    while (left < len && str[left] == '0') left++;
    while (right >= 0 && str[right] == '0') right--;

    // Check if the count of leading and trailing zeros matches
    if (left > right || left - (len - right - 1) != 0) return false;

    // Check if the middle part contains only '1's
    for (int i = left; i <= right; i++) {
        if (str[i] != '1') return false;
    }

    return true;
}

int main() {
    char str[100];
    
    // Input the string
    printf("Enter the string: ");
    scanf("%s", str);
    
    // Check if the string belongs to the language
    printf("The string %s the language defined by the CFG.\n", checkString(str) ? "belongs to" : "does not belong to");
    
    return 0;
}

