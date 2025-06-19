#include <stdlib.h>
#include <stdio.h>
#include "v4lib.h"

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
