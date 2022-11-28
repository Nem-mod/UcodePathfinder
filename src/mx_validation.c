#include "pathfinder.h" 

t_error mx_validation(t_file *s) {
    if(mx_file_is_empty(s))
        return FILE_IS_EMPTY;

    if(mx_first_line_invalid(s->array_of_lines))
        return INVALID_FIRST_LINE;

    if(mx_number_of_island_invalid(s->array_of_lines)){
        return INVALID_NUMBER_OF_ISLANDS;
    }

    int i = mx_line_invalid(s->array_of_lines);
    if(i > 0) {
        s->invalid_line = i;
        return INVALID_LINE;
    }

    if(mx_has_duplicates(s->array_of_lines))
        return DUPLICATE_BRIDGES;
        
     if(mx_invalid_length(s->array_of_lines))
        return INVALID_SUM_OF_BRIDGES;

    return NO_ERRORS;
}

