#include "pathfinder.h"


int** mx_get_int_matrix_p(t_graph *graph){
    int V = graph->v;
    int **matrix_of_paths = malloc(V * sizeof(int*));
    for (int i = 0; i < V; i++) {
        matrix_of_paths[i] = malloc(V * sizeof(int));
        for (int j = 0; j < V; j++){
            matrix_of_paths[i][j] = 0;
        }
        
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
                int dis = graph->edges[i][j];
                matrix_of_paths[i][j] = dis;                
        }
        
    }
    
    

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {

                if(i != j && matrix_of_paths[i][k] != 0 && matrix_of_paths[k][j] != 0) {
                    if(matrix_of_paths[i][j] == 0){
                        matrix_of_paths[i][j] = matrix_of_paths[i][k] + matrix_of_paths[k][j];
                    } else {
                        if(matrix_of_paths[i][j] > matrix_of_paths[i][k] + matrix_of_paths[k][j])
                            matrix_of_paths[i][j] = matrix_of_paths[i][k] + matrix_of_paths[k][j];
                    }
                }
            }
        }
    }

    return matrix_of_paths;
}
