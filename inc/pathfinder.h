#ifndef PATHFINDER_H
#define PATHFINDER_H


#include "libmx.h"

#define INT_MAX 2147483647

typedef struct s_graph {
    int v;
    char **names_of_nodes;
    int **edges;
    int **matrix_of_paths;
}               t_graph;

typedef struct s_file {
    char *name;
    char *filestr;
    char **array_of_lines;
    int count;
    int invalid_line;
}              t_file;

typedef enum e_error {
    NO_ERRORS,
    FILE_IS_EMPTY,
    INVALID_FIRST_LINE,
    INVALID_LINE,
    INVALID_NUMBER_OF_ISLANDS,
    DUPLICATE_BRIDGES,
    INVALID_SUM_OF_BRIDGES
    
} t_error;


t_graph* mx_create_graph(t_file *file);
int** mx_get_int_matrix_p(t_graph *graph);
int** mx_get_int_matrix_d(t_graph *graph, char **array_of_lines);
t_file* mx_create_file_struct(char* filename);


t_error mx_validation(t_file *s);
int mx_line_invalid(char **arr);
bool mx_number_of_island_invalid(char **arr);
bool mx_file_does_not_exist(int fs);
bool mx_file_is_empty(t_file *s);
bool mx_first_line_invalid(char **arr);
bool mx_invalid_length(char** arr);
bool mx_has_duplicates(char** arr);
void mx_print_file_err(t_file *f,t_error err);

void mx_resolve(t_file *file);

char **mx_parse_line(char *str);
char **mx_get_node_names(char** arr, int size);



int mx_get_index_by_name(char **arr, char* s);

void mx_print_graph(t_graph *graph);
void mx_print_route(t_graph *graph, int *route, int count);
void mx_print_path(t_graph *graph, int *route, int count);
void mx_print_sum_of_dis(t_graph *graph, int *route, int count);

void mx_clear_graph(t_graph* s);
void mx_clear_file_struct(t_file* s);



#endif

