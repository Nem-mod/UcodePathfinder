#include "libmx.h"


char* mx_file_to_str(const char* file){
    int ptr = open(file, O_RDONLY);
    int size = 0;
    if (!ptr) {
        close(ptr);
        return NULL;
    }
    char buff;
    while (read(ptr, &buff, 1) > 0) {
        size++;
    }

    close(ptr);

    if (size == 0) {
        return NULL;
    }

    ptr = open(file, O_RDONLY);

    char* result = mx_strnew(size);
    read(ptr, result, size);

    return result;
}
