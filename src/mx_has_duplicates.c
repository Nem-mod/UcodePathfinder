#include "pathfinder.h"

bool mx_has_duplicates(char** arr) {
    char** s1 = NULL;
    char** s2 = NULL;
    for(int i = 1; arr[i]; i++) {
        s1 = mx_parse_line(arr[i]);
        for(int j = 1; arr[j]; j++) {
            if(i == j) {
                continue;
            }
            s2 = mx_parse_line(arr[j]);

            if(mx_strcmp(s1[0], s2[0]) == 0 && 
                mx_strcmp(s1[1], s2[1]) == 0) {
                mx_del_strarr(&s1);
                mx_del_strarr(&s2);
                return true;
            }
            if(mx_strcmp(s1[1], s2[0]) == 0 && 
                mx_strcmp(s1[0], s2[1]) == 0) {
                mx_del_strarr(&s1);
                mx_del_strarr(&s2);
                return true;
            }
            mx_del_strarr(&s2);
        }
        mx_del_strarr(&s1);
    }

    return false;
}
