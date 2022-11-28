#include "pathfinder.h"

bool mx_first_line_invalid(char **arr) {
    char* str = arr[0];
    int i = 0;
    while(str[i]) {
        if(str[i] < '0' || str[i] > '9') {
            return true;
        }
        i++;
    }
    return false;
}
