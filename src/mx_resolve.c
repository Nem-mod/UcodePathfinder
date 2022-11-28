#include "pathfinder.h"

void mx_resolve(t_file *file){
    t_graph *graph = mx_create_graph(file); 
    mx_print_graph(graph);
    mx_clear_graph(graph);
}
