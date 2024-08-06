#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    int whitespace_count = 0;
    int newline_count = 0;

    // Open the C program file
    fp = fopen("input.txt", "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Read characters from file one by one
    while ((ch = fgetc(fp)) != EOF) {
        // Check for whitespace characters
        if (ch == ' ' || ch == '\t') {
            whitespace_count++;
        }
        // Check for newline characters
        else if (ch == '\n') {
            newline_count++;
        }
    }

    // Close the file
    fclose(fp);

    // Print the results
    printf("Number of whitespace characters: %d\n", whitespace_count);
    printf("Number of newline characters: %d\n", newline_count);

    return 0;
}
