#include "pathfinder.h"

void mx_clear_file_struct(t_file *s) {
    mx_strdel(&s->filestr);
    s->filestr = NULL;
    mx_strdel(&s->name);
    s->name = NULL;
    mx_del_strarr(&s->array_of_lines);
    s->array_of_lines = NULL;
    free(s);
    s = NULL;
}
