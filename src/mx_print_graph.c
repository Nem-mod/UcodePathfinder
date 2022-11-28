#include "pathfinder.h"

void mx_print_graph(t_graph *graph){
    int *route = (int *)malloc((graph->v + 1) * sizeof(int));
    int count = 1;
    
    for (int i = 0; i < graph->v; i++) {
        for (int j = i + 1; j < graph->v; j++) {
            route[1] = i;
            route[0] = j;
            mx_print_route(graph, route, count);
        }
    }

    free(route);
}

