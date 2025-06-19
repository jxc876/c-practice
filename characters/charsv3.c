#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct {
    char *letters;
    char *numbers;
    char *special;
} Result;

Result* analyze_string(const char *str);

/**
* Sample Run
 * input string => [mike 123 ***]
 * -------
 * letters => [mike]
 * numbers => [123]
 * special => [***]
 */
int main(void) {
    // the string we want to check
    const char *my_str = "mike 123 ***";
    printf("input string => [%s]\n", my_str);
    printf("-------\n");

    Result* result = analyze_string(my_str);
    if (result == NULL) {
        return EXIT_FAILURE;
    }

    // show results
    printf("letters => [%s]\n", result->letters);
    printf("numbers => [%s]\n", result->numbers);
    printf("special => [%s]\n", result->special);

    // cleanup
    free(result->letters);
    free(result->numbers);
    free(result->special);
    free(result);

    return EXIT_SUCCESS;
}

Result *analyze_string(const char *str) {
    Result *result = malloc(sizeof(Result));
    if (result == NULL) {
        return NULL;
    }

    // Allocate memory for each string
    // add 1 extra for '\0'
    result->letters = malloc(strlen(str) + 1); // "abc"
    result->numbers = malloc(strlen(str) + 1); // "123"
    result->special = malloc(strlen(str) + 1); // "!@#"

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

    // loop array
    for (int i = 0; str[i] != '\0'; i++) {

        // add to letters array
        if (isalpha(str[i])) {
            result->letters[letter_idx] = str[i];
            letter_idx++;
        }

        // add to digits array
        if (isdigit(str[i])) {
            result->numbers[num_idx] = str[i];
            num_idx++;
        }

        // add to digits array
        if (!isalnum(str[i]) && !isspace(str[i])) {
            result->special[special_idx] = str[i];
            special_idx++;
        }
    }
    return result;
}