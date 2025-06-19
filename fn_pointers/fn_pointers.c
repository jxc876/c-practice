#include <stdio.h>
/**
 * Small program to show how function pointers work.
 */

// makes it easier to refer to the function
typedef int (*Operation)(int, int);

int add(int a, int b){ return a + b; }

int main(void) {
    const Operation op = add; // <===
    printf("value: %d\n", op(2, 3));
    return 0;
}