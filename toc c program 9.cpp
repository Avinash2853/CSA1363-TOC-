#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to simulate the NFA
bool simulateNFA(const char* str) {
    int len = strlen(str);
    int state = 0; // Start at state q0

    for (int i = 0; i < len; i++) {
        char ch = str[i];

        switch (state) {
            case 0: // q0
                if (ch == 'b') {
                    state = 1; // Move to state q1
                } else {
                    return false; // Invalid character or string does not start with 'b'
                }
                break;
            case 1: // q1
                if (ch == 'a') {
                    state = 2; // Move to state q2
                } else if (ch == 'b') {
                    state = 1; // Stay in state q1
                } else {
                    // Stay in state q1 for other characters
                }
                break;
            case 2: // q2
                if (ch == 'b') {
                    state = 1; // Move to q1
                } else if (ch == 'a') {
                    state = 2; // Stay in q2
                } else {
                    // Stay in state q2 for other characters
                }
                break;
        }
    }

    // Accept if we end in state q2
    return state == 2;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);

    if (simulateNFA(str)) {
        printf("The string belongs to the language defined by the NFA.\n");
    } else {
        printf("The string does not belong to the language defined by the NFA.\n");
    }

    return 0;
}

