#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    #define BUFFER_SIZE 256   // Maximum size of input buffer
    char inputBuffer[BUFFER_SIZE + 1], *fileName = inputBuffer; // Buffer to store user input and pointer to file name
    char character;
    int index = 0; // Counter for the number of characters read
    
    printf("Please enter a file name: ");
    
    // Read characters until newline character is encountered
    while ((character = getchar()) != '\n') {
        fileName[index++] = character; // Store each character in the input buffer
    }

    // Fill the remaining buffer with null characters
    for (; index < BUFFER_SIZE + 1; index++) {
        fileName[index] = '\0'; // Ensure the rest of the buffer is null-terminated
    }

    // Find the file extension
    char *extension = strrchr(fileName, '.'); // Get a pointer to the last occurrence of '.'
    if (extension != NULL && *(extension + 1) != '\0') { // Check if extension exists and is not empty
        printf("File extension: %s\n", extension); // Print the file extension
    } else {
        printf("Error: No valid file extension found.\n"); // Print error message if no valid extension found
    }

    return EXIT_SUCCESS; // Exit with success status
}
