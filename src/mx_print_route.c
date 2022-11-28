#include "pathfinder.h"

static void print_field(t_graph *graph, int *route,int count) {
    mx_printstr("========================================\n");
    mx_printstr("Path: ");
    mx_printstr(graph->names_of_nodes[route[1]]);
    mx_printstr(" -> ");
    mx_printstr(graph->names_of_nodes[route[0]]);
    mx_printstr("\nRoute: ");
    mx_print_path(graph, route, count);
    mx_printstr("\nDistance: ");
    mx_print_sum_of_dis(graph, route, count);
    mx_printstr("\n========================================\n");
}

void mx_print_route(t_graph *graph, int *route,int count) {
    int start = route[0];
    int end = route[count];
    for (int i = 0; i < graph->v; i++) {
        if(graph->edges[end][i] == 0 )
            continue;
        if(
            (graph->edges[end][i] == graph->matrix_of_paths[end][start] - graph->matrix_of_paths[i][start])
            && i != route[count]) {
            count++;
            route[count] = i;
            mx_print_route(graph, route, count);
            count--;

        }
    }

    if (route[count] != start) {
        return;
    }
    
    print_field(graph, route, count);
}

