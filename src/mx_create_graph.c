#include "pathfinder.h"

t_graph* mx_create_graph(t_file *file) {
    t_graph *o = malloc(sizeof(t_graph));
    if(o == NULL) {
        return NULL;
    }
    o->v = file->count;
    
    o->names_of_nodes = mx_get_node_names(file->array_of_lines, o->v); 
    o->edges = mx_get_int_matrix_d(o, file->array_of_lines);
    o->matrix_of_paths = mx_get_int_matrix_p(o);
    return o;
}
