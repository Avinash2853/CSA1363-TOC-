#include <stdio.h>
#include <stdbool.h>

bool simulateDFA(const char *input) {
    enum { q0, q1, q2 } state = q0;

    while (*input) {
        switch (state) {
            case q0: state = (*input == 'a') ? q0 : q1; break;
            case q1: state = (*input == 'a') ? q2 : q1; break;
            case q2: state = (*input == 'a') ? q2 : q1; break;
        }
        input++;
    }

    return state == q0 || state == q2;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    printf("%s\n", simulateDFA(input) ? "Accepted" : "Rejected");

    return 0;
}

