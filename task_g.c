#include <stdio.h>
#include <stdlib.h>
#include "task_g.h"

int main(void) {
    FILE *file = fopen("numbers.txt", "r");
    if (!file) {
        printf("Error!"); // Print error message if file opening fails
        return 1;
    }

    double numbers[20]; // Array to store numbers from the file
    int count = 0;

    // Read 20 numbers from the file
    while (count < 20 && fscanf(file, "%lf", &numbers[count]) == 1) {
        count++;
    }
    fclose(file);

    
    if (count < 20) {
        printf("Error!");
        return 1;
    }

    double max;
    find_max_less_than_10(numbers, count, &max);

    if (max == -1) {  
        printf("Error!"); // Print error message if no valid number less than 10 was found
    } else {
        printf("%.2f", max); // Print the maximum number found with 2 decimal places
    }

    return 0;
}