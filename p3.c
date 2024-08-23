#include <stdio.h>
#include <conio.h>  // For getch()

int main() {
    char password[20];
    int i = 0;
    char ch;

    printf("Enter your password: ");

    while ((ch = getch()) != '\r') {  // '\r' is carriage return (Enter key)
        if (i < 19) {  // Ensure we don't exceed the buffer size
            password[i++] = ch;
            printf("*");  // Print asterisks instead of characters
        }
    }
    password[i] = '\0';  // Null-terminate the string

    printf("\nYour password is: %s\n", password);

    return 0;
}

// output:
// Enter your password: ************
// Your password is: computer org