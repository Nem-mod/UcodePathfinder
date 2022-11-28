#include "pathfinder.h"

bool mx_invalid_length(char** arr) {
    char** s = NULL;
    for(int i = 1; arr[i]; i++) {
        s = mx_parse_line(arr[i]);
        if(mx_atoi(s[2]) >= INT_MAX) {
            return true;
        }
        mx_del_strarr(&s);
    }
    return false;
}
