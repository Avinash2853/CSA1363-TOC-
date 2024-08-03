#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool checkString(const char *str) {
    int len = strlen(str);
    if (len < 2 || str[0] != '0' || str[len - 1] != '1') return false;

    int count0 = 0, count1 = 0;
    for (int i = 1; i < len - 1; i++) {
        if (str[i] == '0') count0++;
        else if (str[i] == '1') count1++;
        else return false;
    }

    return count0 == count1;
}

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    printf("The string %s the language defined by the CFG.\n", checkString(str) ? "belongs to" : "does not belong to");

    return 0;
}

