// Includes
#include <stdio.h>
#include <string.h>
#include "domains.h" 

// Main function 
int main(void) {
    
    // Read user input
    #define LEN 4
    char user_input[LEN];
    printf("Enter a domain including the . (e.g. .uk): ");
    fgets(user_input, LEN, stdin);
    
	
    // Enter your code under here

    // Check if the first character is a dot
    if (user_input[0] != '.') {
        printf("Error! The first character entered should be a .");
        return 1; // Exit the program
    }
    
    // Compare user input with domain list
    int total_domains = sizeof(country_codes) / sizeof(country_codes[0]);
    int found = 0;  // Flag to indicate if a match was found
    for (int i = 0; i < total_domains; i++) {
        if (strcmp(user_input, country_codes[i].domain) == 0) {
            printf("This is the domain for: %s", country_codes[i].country);
            found = 1;
            break;
        }
    }

    // If no match found
    if (!found) {
        printf("Domain not found.");
    }
    
    // Do not edit below here
    return 0;
}
