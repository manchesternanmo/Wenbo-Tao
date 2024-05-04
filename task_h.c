#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void) {

    // Get user input
    #define N 256
    char buffer[N+1], *filename = buffer;
    char ch;
    int i = 0; // counter for how many characters read
    printf("Enter a file name: ");
    while ((ch = getchar()) != '\n') { // get one character at a time
        
        // Enter your code under here
        if (i >= N) { // Check if the filename exceeds 256 characters
            printf("Error!");
            return EXIT_FAILURE;
        
    }
    filename[i++] = ch;
    }
    for (; i < N+1; i++) { // fill the rest of the array with null characters
        filename[i] = '\0';
    }

    
    char *ext = strrchr(filename, '.'); // Print the file extension
    if (ext != NULL && *(ext + 1) != '\0') { // Check if extension exists and is not empty
        printf("%s", ext); // Print the file extension
    } else {
        printf("Error!"); //display the error
    }




    return EXIT_SUCCESS;
}