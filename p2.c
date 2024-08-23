#include <stdio.h>

int main() {
    char str[100];  // Buffer to store the input
    int i = 0;
    int ch;  // Variable to hold the character read

    // Reading characters one by one using getc until newline or EOF
    while ((ch = getc(stdin)) != '\n' && ch != EOF) {
        if (i < 99) {  // Prevent buffer overflow
            str[i++] = (char)ch;
        }
    }
    str[i] = '\0';  // Null-terminate the string

    printf("You entered: %s\n", str);
    return 0;
}

// output :
// hello google
// You entered: hello google