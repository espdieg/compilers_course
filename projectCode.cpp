#include <stdio.h>
#include <string>

int S(), A(), B();
char *ip;
char string[50];

int main() {
    printf("Enter the string: ");
    scanf("%s", string);

    ip = string;
    printf("\n\nInput\t\tAction\n ------------------------------\n");
    if (S()) {
        printf("\n------------------------------------------------\n");
        printf("\nString is successfully parsed\n");
    } else {
        printf("\n ------------------------------------------------\n");
        printf("Error in parsing string\n");
    }
    return 0;
}

int S() {
    if (*ip == 'a') {
        ip++;
        printf("%s\t\tS → aAB\n", ip);
        if (A() && B()) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

int A() {
    if (*ip == 'b') {
        ip++;
        printf("%s\t\tA → b\n", ip);
        return 1;
    } else if (*ip == 'c') {
        ip++;
        printf("%s\t\tA → c\n", ip);
        return 1;
    } else if (*ip == 'a') {
        ip++;
        printf("%s\t\tA → a\n", ip);
        return 1;
    }
    return 0;
}

int B() {
    if (*ip == 'd') {
        ip++;
        printf("%s\t\tB → d\n", ip);
        return 1;
    }
    return 0;
}

