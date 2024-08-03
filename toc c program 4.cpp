#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(const char *str) {
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}

// Function to check if the string belongs to the CFG language
bool checkString(const char *str) {
    return isPalindrome(str);
}

int main() {
    char str[100];
    
    // Input the string
    printf("Enter the string: ");
    scanf("%s", str);
    
    // Check if the string belongs to the language
    if (checkString(str)) {
        printf("The string belongs to the language defined by the CFG.\n");
    } else {
        printf("The string does not belong to the language defined by the CFG.\n");
    }
    
    return 0;
}

