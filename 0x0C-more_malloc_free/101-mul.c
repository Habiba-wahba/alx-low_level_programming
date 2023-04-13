 #include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * Returns the length of a null-terminated string
 */
int str_len(char *str) {
    int len = 0;
    while (*str++) {
        len++;
    }
    return len;
}

/**
 * Converts a string to an integer
 */
int str_to_int(char *str) {
    int result = 0;
    while (*str) {
        if (!isdigit(*str)) {
            fprintf(stderr, "Error: '%s' is not a valid number\n", str);
            exit(98);
        }
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

/**
 * Multiplies two positive integers
 */
int multiply(int a, int b) {
    return a * b;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "Error: Usage: %s num1 num2\n", argv[0]);
        exit(98);
    }

    int num1 = str_to_int(argv[1]);
    int num2 = str_to_int(argv[2]);

    int result = multiply(num1, num2);

    printf("%d\n", result);

    return 0;
}

