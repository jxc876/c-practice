#ifndef CHARS_LIB_H
#define CHARS_LIB_H

typedef struct {
    char *letters;
    char *numbers;
    char *special;
} Result;

Result* analyze_string(const char *str);

#endif //CHARS_LIB_H
