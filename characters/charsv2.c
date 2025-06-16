#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (FilterFn(int c));
char* filter_array(const char *str, const FilterFn filter);

void print_string(const char *str);

int isSpecialChar(int c) {
    if (!isalnum(c) && !isspace(c)) {
        return 1; // Found a special character
    }
    return 0; // No special characters found
}

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
    const char *letters = filter_array(my_str, isalpha);
    printf("letters => [%s]\n", letters);
    free(letters);

    // find numbers
    const char *numbers = filter_array(my_str, isdigit);
    printf("numbers => [%s]\n", numbers);
    free(numbers);

    // find special characters, ex: "!*$"
    const char *special_chars = filter_array(my_str, isSpecialChar);
    printf("special chars => [%s]\n", special_chars);
    free(special_chars);

    return EXIT_SUCCESS;
}

/**
 * Loops a string and extracts character matches.
 * @param str The input string you want to check, ex: "hello 123"
 * @param filter A function that determines if a char is a match
 * @return A string containing matched characters
 */
char* filter_array(const char *str, const FilterFn filter) {
    // allocates a dynamic array to hold matches
    const unsigned long length = strlen(str);
    char *matches = malloc(length + 1); // Max possible size + null terminator
    if (!matches) return NULL; // Check for malloc failure

    // find any matches
    int j = 0; // index for matches array
    for (int i = 0; str[i] != '\0'; i++) {
        if (filter(str[i])) {
            matches[j++] = str[i];
        }
    }
    matches[j] = '\0'; // Null-terminate the result string
    return matches;
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
