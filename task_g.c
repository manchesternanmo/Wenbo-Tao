#include <stdio.h>
#include <stdlib.h>
#include "task_g.h"

int main(void) {
    // Open the file "numbers.txt" for reading
    FILE *inputFile = fopen("numbers.txt", "r");
    
    // Check if file opening failed
    if (!inputFile) {
        printf("Error!\n"); // Print error message
        return 1; // Return with error status
    }

    // Array to store numbers from the file
    double numArray[20];
    int numCount = 0;

    // Read up to 20 numbers from the file
    while (numCount < 20 && fscanf(inputFile, "%lf", &numArray[numCount]) == 1) {
        numCount++; // Increment count of numbers read
    }
    
    // Close the file
    fclose(inputFile);

    // Check if fewer than 20 numbers were read
    if (numCount < 20) {
        printf("Error!\n"); // Print error message
        return 1; // Return with error status
    }

    // Find the maximum number less than 10
    double maximum;
    find_max_less_than_10(numArray, numCount, &maximum);

    // Check if a valid number less than 10 was found
    if (maximum == -1) {
        printf("Error!\n"); // Print error message
    } else {
        printf("%.2f\n", maximum); // Print the maximum number found with 2 decimal places
    }
    
    return 0; // Return with success status
}
