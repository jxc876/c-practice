#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// declarations
void print_string(const char *str);
int get_number_count(const char *str);
char* get_numbers(const char *str);
char* get_letters(const char *str);
char* get_special_chars(const char *str);


/**
 * Sample Run
 * input string => [mike 123 ***]
 * -------
 * letters => [mike]
 * numbers => [123]
 * special chars => [***]
 */
int main(void) {
    // the string we want to check
    const char *my_str = "mike 123 ***";
    printf("input string => [%s]\n", my_str);
    printf("-------\n");

    // find letters
    const char *letters = get_letters(my_str);
    printf("letters => [%s]\n", letters);
    free(letters);

    // find numbers
    const char *numbers = get_numbers(my_str);
    printf("numbers => [%s]\n", numbers);
    free(numbers);

    // find special characters, ex: "!*$"
    const char *special_chars = get_special_chars(my_str);
    printf("special chars => [%s]\n", special_chars);
    free(special_chars);

    return EXIT_SUCCESS;
}

/**
 * Check how many numbers are inside a string.
 * @param str The input string you want to check, ex: "hello 123"
 * @return The count, ex: 3
 */
int get_number_count(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            count++;
        }
    }
    return count;
}

/**
 * Loops a string and extracts numbers.
 * Uses isdigit() from <ctype.h>
 * @param str The input string you want to check, ex: "hello 123"
 * @return A string with the numbers, ex: "123"
 */
char* get_numbers(const char *str) {
    // allocates a dynamic array to hold matches
    const unsigned long length = strlen(str);
    char *digits = malloc(length + 1); // Max possible size + null terminator
    if (!digits) return NULL; // Check for malloc failure

    // find the numbers
    int j = 0; // index for digits array
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            digits[j++] = str[i];
        }
    }
    digits[j] = '\0'; // Null-terminate the result string
    return digits;
}

char* get_letters(const char *str) {
    // requires a dynamic array to hold the letters
    const unsigned long length = strlen(str);
    char *letters = malloc(length + 1); // Max possible size + null terminator
    if (!letters) return NULL; // Check for malloc failure

    // find the letters
    int j = 0; // index for digits array
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters[j++] = str[i];
        }
    }
    letters[j] = '\0'; // Null-terminate the result string
    return letters;
}

char* get_special_chars(const char *str) {
    // requires a dynamic array to hold special chars
    const unsigned long length = strlen(str);
    char *special_chars = malloc(length + 1); // Max possible size + null terminator
    if (!special_chars) return NULL; // Check for malloc failure

    // find the letters
    int j = 0; // index for special_chars array
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && !isspace(str[i])) {
            special_chars[j++] = str[i];
        }
    }
    special_chars[j] = '\0'; // Null-terminate the result string
    return special_chars;
}


/**
 * Useful debugging method, prints "hello" as "[h][e][l][l][o]"
 * @param str The input string you want to print
 */
void print_string(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("[%c]", str[i]);
    }
}
