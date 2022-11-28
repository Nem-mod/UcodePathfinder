#include "pathfinder.h"

int mx_line_invalid(char **arr) {
    int lindex = 1;
    for (int i = 1; arr[i]; i++) {
        char **larr = mx_parse_line(arr[i]);
        char* strdis = mx_strdup(larr[2]);
        int j = 0;
        int delim1 = 0;
        int delim2 = 0;
        lindex++;
        if(mx_strcmp(larr[0], larr[1]) == 0)
            return lindex;

        while(strdis[j]) {
            if(strdis[j] < '0' || strdis[j] > '9') {
                return lindex;
            }
            j++;
        }

        for (int k = 0; arr[i][k] != '\0'; k++) {
            if (arr[i][k] == '-')
                delim1++;
            if (arr[i][k] == ',' && delim1 == 1)
                delim2++;
        }

        if (delim1 != 1 || delim2 != 1) {
            return lindex;
        }

        mx_strdel(&strdis);
        mx_del_strarr(&larr);
    }
    return 0;
}
