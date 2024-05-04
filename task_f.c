#include <stdio.h>
#include <string.h>
#include "domains.h" // Include the header file containing country domain information

// Main function 
int main(void) {
    #define DOMAIN_LEN 6 // Define the length of the domain input
    char userInput[DOMAIN_LEN]; // Array to store user input
    printf("Please enter a domain (e.g. .uk): "); // Prompt the user for input
    fgets(userInput, DOMAIN_LEN, stdin); // Read user input including newline character

    // Check if the first character is a dot
    if (userInput[0] != '.') {
        printf("Error! The first character entered should be a ."); // Display error message
        return 1; // Exit with error status
    }
 
 
    // Comparing the input with the country codes
    int totalDomains = sizeof(country_codes) / sizeof(country_codes[0]); // Calculate the total number of domains
    int isFound = 0; // Flag indicating if a match was found
    for (int i = 0; i < totalDomains; i++) {
        if (strcmp(userInput, country_codes[i].domain) == 0) { // Compare user input with domain list
            printf("This is the domain for: %s", country_codes[i].country); // Print the corresponding country
            isFound = 1; // Set flag to indicate match found
            break; // Exit loop once a match is found
        }
    }

    if (!isFound) { // If no match found
        printf("Domain not found."); // Print error message
    }

    return 0; // Return with success status
}
