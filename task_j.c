#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void) {
    char email[] = "wenbo.tao@student.manchester.ac.uk"; // Define email address
    FILE *fptr = fopen("certificate.txt", "w"); // Open file for writing
    if (fptr == NULL) { // Check if the file was opened successfully
        printf("Error. Not able to open the file.");
        return EXIT_FAILURE;
    }

    time_t t = time(NULL); // Get current time
    struct tm *tm = localtime(&t);
    char dateStr[20]; // Buffer for date string
    strftime(dateStr, sizeof(dateStr), "%b %-2d %Y", tm); // Format date as "Apr 15 2021" without leading zero

    // Write to file
    fprintf(fptr, "Hello. My email address is:\n"); //Write email address to file
    fprintf(fptr, "%s\n", email);
    fprintf(fptr, "I completed the course on %s", dateStr);

    // Close the file
    fclose(fptr);
    
    return EXIT_SUCCESS;
}