#include "pathfinder.h"

void mx_print_file_err(t_file *f, t_error err){
    switch (err)
    {
    case FILE_IS_EMPTY:
        mx_printerr("error: file ");
        mx_printerr(f->name);
        mx_printerr(" is empty\n");
        exit(0);
        break;
    case INVALID_FIRST_LINE: 
        mx_printerr("error: line 1 is not valid\n");
        exit(0);
        break;
    case INVALID_LINE:
        mx_printerr("error: line ");
        mx_printerr(mx_itoa(f->invalid_line));
        mx_printerr(" is not valid\n");
        exit(0);
        break;
    case INVALID_NUMBER_OF_ISLANDS:
        mx_printerr("error: invalid number of islands\n");
        exit(0);
        break;
    case DUPLICATE_BRIDGES:
        mx_printerr("error: duplicate bridges\n");
        exit(0);
        break;
    case INVALID_SUM_OF_BRIDGES:
        mx_printerr("error: sum of bridges lengths is too big\n");
        exit(0);
        break;
    default:
        return;
    }
}
