#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "v4lib.h"

Result *analyze_string(const char *str) {
    Result *result = malloc(sizeof(Result));
    if (result == NULL) {
        return NULL;
    }

    // initializer pointers
    result->letters = NULL;
    result->numbers = NULL;
    result->special = NULL;

    // Allocate memory for each string
    // add 1 extra for '\0'
    result->letters = malloc(strlen(str) + 1); // ex: "abc"
    result->numbers = malloc(strlen(str) + 1); // ex: "123"
    result->special = malloc(strlen(str) + 1); // ex: "!@#"

    if (!result->letters || !result->numbers || !result->special) {
        // Handle allocation failure
        free(result->letters);
        free(result->numbers);
        free(result->special);
        free(result);
        return NULL;
    }

    int letter_idx = 0;
    int num_idx = 0;
    int special_idx = 0;

    // loop input string
    for (int i = 0; str[i] != '\0'; i++) {

        // append to letters array
        if (isalpha(str[i])) {
            result->letters[letter_idx] = str[i];
            letter_idx++;
        }

        // append to numbers array
        if (isdigit(str[i])) {
            result->numbers[num_idx] = str[i];
            num_idx++;
        }

        // append to special char array
        if (!isalnum(str[i]) && !isspace(str[i])) {
            result->special[special_idx] = str[i];
            special_idx++;
        }
    }

    // null-terminate strings
    result->letters[letter_idx] = '\0';
    result->numbers[num_idx] = '\0';
    result->special[special_idx] = '\0';
    return result;
}