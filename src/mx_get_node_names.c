#include "pathfinder.h"

static bool find_in_arr(char **arr, char* s, int k) {
    for(int i = 0; i < k; i++) {
        if(arr[i] != NULL && mx_strcmp(arr[i], s) == 0)
            return true;
    }
    return false;
}
char **mx_get_node_names(char** arr, int size){
    char **s = NULL;
    int k = 0;
    char **names_of_nodes = (char**)malloc(sizeof(char*) * size);    
    for(int i = 1; arr[i]; i++) {
        s = mx_parse_line(arr[i]);
        for(int j = 0; j <= 1; j++){
            if(!find_in_arr(names_of_nodes, s[j], k)) {
                names_of_nodes[k] = mx_strdup(s[j]);
                k++;
            }
        }
        mx_del_strarr(&s);
    }
    return names_of_nodes;
}
