#include <stdio.h>

int main() {
    // Define the email address
    char my_email[] = "wenbo.tao@student.manchester.ac.uk"; 

    // Variable to store the user's input for index
    int n; 

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Check if the entered index is negative
    if (n < 0) {
        printf("Error"); // Print error message
        return 1; // Exit the program with an error code
    }

    // Check if the entered index is greater than or equal to the length of the email address
    if (n >= sizeof(my_email) / sizeof(my_email[0]) - 1) {
        printf("Error"); // Print error message
        return 1; // Exit the program with an error code
    }

    // Check if the character at the specified index is a vowel
    switch (my_email[n]) {
        case 'a': case 'e': case 'i': case 'o': case 'u':  
        case 'A': case 'E': case 'I': case 'O': case 'U':  
            printf("Vowel"); // Print "Vowel" if it's a vowel
            break;
        default:
            printf("Not vowel"); // Print "Not vowel" otherwise
    }

    return 0; // Exit the program successfully
}
