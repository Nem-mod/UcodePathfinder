#include "pathfinder.h"

void mx_print_path(t_graph *graph, int *route, int count){
    if (count == 2) {
        mx_printstr(graph->names_of_nodes[route[1]]);
        mx_printstr(" -> ");
        mx_printstr(graph->names_of_nodes[route[0]]);
        return;
    }
    for (int i = 1; i < count + 1; i++) {
        mx_printstr(graph->names_of_nodes[route[i]]);
        if (i < count)
            mx_printstr(" -> ");

    }
}
