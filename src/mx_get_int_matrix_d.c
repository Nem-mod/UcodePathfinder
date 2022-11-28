#include "pathfinder.h"
static int get_index_of_island(char **arr, char *str) {
    for (int i = 0; arr[i]; i++) {
        if (mx_strcmp(arr[i], str) == 0){
            return i;
        }
    }
    return -1;
    
}
int** mx_get_int_matrix_d(t_graph *graph, char **array_of_lines){
    int V = graph->v;
    int **matrix_of_dis = malloc(V * sizeof(int*));
    for (int i = 0; i < V; i++) {
        matrix_of_dis[i] = malloc(V * sizeof(int));
        for (int j = 0; j < V; j++){
            matrix_of_dis[i][j] = 0;
        }
    }
    for (int i = 1; array_of_lines[i]; i++){
        char **s = mx_parse_line(array_of_lines[i]);
        int ind1 = get_index_of_island(graph->names_of_nodes, s[1]);
        int ind2 = get_index_of_island(graph->names_of_nodes, s[0]);

        matrix_of_dis[ind1][ind2] = mx_atoi(s[2]);
        matrix_of_dis[ind2][ind1] = mx_atoi(s[2]);
        mx_del_strarr(&s);
    }

    return matrix_of_dis;
}
