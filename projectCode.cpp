#include <stdio.h>
#include <string>

// Function prototypes for my parsing functions
int S(), A(), B();

// This is a pointer to traverse the input string
char *ip;
// Array which stores the input string 
char string[50];

int main() {
    // Ask and scan for input
    printf("Enter the string: ");
    scanf("%s", string);

    // Initialize pointer
    ip = string;
    
    printf("\n\nInput\t\tAction\n ------------------------------\n");

    // Calling S() which begins check for successful/unsuccessful parsing
    if (S()) {
        printf("\n------------------------------------------------\n");
        printf("\nString is successfully parsed\n");
    } else {
        printf("\n ------------------------------------------------\n");
        printf("Error in parsing string\n");
    }
    return 0;
}

// Parsing function for non-terminal S
int S() {
    // Check if the current pointer value is 'a'
    if (*ip == 'a') {
        // if true adjust pointer
        ip++;
        printf("%s\t\tS → aAB\n", ip);
        
        // Calling A() and B() which each begin checks for successful/unsuccessful parsing
        if (A() && B()) {
            return 1; // successful if both parse  
        } else {
            return 0; // unsuccessful if both fail to parse
        }
    } else {
        return 0; // return 0 if current pointer value is not 'a'
    }
}

// Parsing function for non-terminal A
int A() {
    // Check if the current pointer value is 'b'
    if (*ip == 'b') {
        // if true adjust pointer
        ip++;
        printf("%s\t\tA → b\n", ip);
        return 1; // return 1, successful parse

    // Check if the current pointer value is 'c'
    } else if (*ip == 'c') {
        // if true adjust pointer
        ip++;
        printf("%s\t\tA → c\n", ip);
        return 1; // return 1, successful parse

    // Check if the current pointer value is 'a'
    } else if (*ip == 'a') {
        // if true adjust pointer
        ip++;
        printf("%s\t\tA → a\n", ip);
        return 1; // return 1, successful parse
    }
    return 0; // return 0 if current pointer value is not 'b', 'c', or 'a'
}

// Parsing function for non-terminal B
int B() {
    // Check if the current pointer value is 'd'
    if (*ip == 'd') {
        // if true adjust pointer
        ip++;
        printf("%s\t\tB → d\n", ip);
        return 1; // return 1, successful parse
    }
    return 0; // return 0 if current pointer value is not 'd'
}

