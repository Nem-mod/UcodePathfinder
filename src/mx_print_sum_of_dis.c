#include "pathfinder.h"

void mx_print_sum_of_dis(t_graph *graph, int *route, int count){
    if (count == 2) {
        mx_printint(graph->matrix_of_paths[route[0]][route[1]]);
        return;
       
    } 
    int temp;
    for (int i = 1; i < count; i++) {
        temp = graph->matrix_of_paths[route[i]][route[i + 1]];
        mx_printint(temp);

        if (i < count - 1) {
            mx_printstr(" + ");
        }
    }
    mx_printstr(" = ");
    mx_printint(graph->matrix_of_paths[route[0]][route[1]]);
}
