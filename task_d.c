#include <stdio.h>

int main(void) {
    double num; // Declare a variable to store the number read from the file
    FILE *fptr; // Declare a file pointer
    
    // Open the file "number.txt" for reading
    fptr = fopen("number.txt", "r");
    
    // Check if the file opening was successful
    if(fptr == NULL) {
        printf("Error: Unable to open the file."); // Display an error message if file opening fails
        return 1; // Return with error status
    }
    
    // Read a number from the file
    fscanf(fptr, "%lf", &num);
    
    // Close the file
    fclose(fptr);
 
    // Print JSON output
    printf("{\n");
    printf(" \"name\": \"Wenbo Tao\",\n"); // Print name
    printf(" \"email\": \"Wenbo.tao@student.manchester.ac.uk\",\n"); // Print email
    printf(" \"number1\": %.2f,\n", num); // Print the number to 2 decimal places
    printf(" \"number2\": %.3e\n", num); // Print the number in scientific notation with 3 digits after the decimal
    printf("}\n"); 

    return 0; // Return with success status
}
