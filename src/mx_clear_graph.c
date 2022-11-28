#include "pathfinder.h"

void mx_clear_graph(t_graph *s) {
    
    if (s->edges != NULL) {
        for(int i =0; i < s->v; i++){
            free(s->edges[i]);
        }
        free(s->edges);
        s->edges = NULL;

    }
    
    if (s->matrix_of_paths != NULL) {
        for(int i =0; i < s->v; i++){
            free(s->matrix_of_paths[i]);
        }
        free(s->matrix_of_paths);
        s->matrix_of_paths = NULL;

    }
    
    if (s->names_of_nodes != NULL) {
        for (int i = 0; i < s->v; i++) {
            mx_strdel(&s->names_of_nodes[i]);
        }
        free(s->names_of_nodes);
        s->names_of_nodes = NULL;
    }
    
    free(s);
    s = NULL;
}
