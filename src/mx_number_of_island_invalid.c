#include "pathfinder.h"

static bool find_in_arr(char **arr, char* s, int k) {
    for(int i = 0; i < k; i++) {
        
        if(mx_strcmp(arr[i], s) == 0) {
            return true;
        }
    }
    return false;
}

bool mx_number_of_island_invalid(char **arr) {
    char** s = NULL;
    int amount_of_islands_f = mx_atoi(arr[0]);
    int k = 0;
    char *names_of_nodes[amount_of_islands_f];
    
    int b = 0;
    for(int i = 1; arr[i]; i++) {
        s = mx_parse_line(arr[i]);
        for(int j = 0; j <= 1; j++){
            if(!find_in_arr(names_of_nodes, s[j], k)) {
                if(k < amount_of_islands_f){
                    names_of_nodes[k] = mx_strdup(s[j]);
                }
                k++;
            }
        }
        b = k;
        mx_del_strarr(&s);
    }
    // for (int i = 0; i < amount_of_islands_f; i++){
    //     mx_strdel(&names_of_nodes[i]);
    // }
    
    if(k != amount_of_islands_f) {
        
        return true;
    }
    
    return false;
}
