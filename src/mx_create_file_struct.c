#include "pathfinder.h"

t_file* mx_create_file_struct(char* filename){
    t_file* o = malloc(sizeof(t_file));
    o->name = mx_strdup(filename);    
    o->filestr = mx_file_to_str(filename);
    o->array_of_lines = mx_strsplit(o->filestr, '\n');
    return o;
}
