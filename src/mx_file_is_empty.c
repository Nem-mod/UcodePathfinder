#include "pathfinder.h"

bool mx_file_is_empty(t_file *s) {
    if(s->filestr == NULL) 
        return true;
    return false;
}
