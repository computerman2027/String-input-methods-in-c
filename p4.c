#include <stdio.h>
#include <conio.h>  // For getche()

int main() {
    char ch;

    printf("Enter characters, press 'q' to quit:\n");

    do {
        ch = getche();  // Read and echo each character
    } while (ch != 'q');  // Exit loop when 'q' is pressed

    printf("\nYou pressed 'q' to quit.\n");

    return 0;
}

// output : 
// Enter characters, press 'q' to quit:
// y i ii jhq
// You pressed 'q' to quit.