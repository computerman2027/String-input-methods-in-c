#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    char ch;

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        str[i++] = ch;
    }
    str[i] = '\0'; // Null-terminate the string

    printf("You entered: %s\n", str);
    return 0;
}

// Output :
// hello
// You entered: hello