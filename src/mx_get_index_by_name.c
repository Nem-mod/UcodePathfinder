#include "pathfinder.h"

int mx_get_index_by_name(char **arr, char* s){
    for(int i = 0; arr[i]; i++) {
        if(mx_strcmp(arr[i], s) == 0)
            return i;
    }

    return -1;
}
