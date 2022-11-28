#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int result = 0;
    if(sub == NULL || str == NULL) {
        return -1;
    }
    if (sub == 0 || str == 0) {
        return 0;
    }
    if (mx_strlen(str) >= mx_strlen(sub)) {
        while (*str) {
            if (mx_strncmp((char *)str, (char *)sub, mx_strlen(sub)) == 0) {
                result++;
            }
            str++;
        }
    }
    return result;
}

