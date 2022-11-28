#include "pathfinder.h"

int main(int argc, char* argv[]) {

    if(argc != 2) {
        mx_printstr("usage: ./pathfinder [filename]\n");
        exit(0);
    }
    if (open(argv[1], O_RDONLY) < 0) {
        mx_printerr("error: file ");
        mx_printerr(argv[1]);
        mx_printerr(" does not exist\n");
        exit(0);
    }
    t_file *file = mx_create_file_struct(argv[1]);
    t_error error = mx_validation(file);
    mx_print_file_err(file, error);
    file->count = mx_atoi(file->array_of_lines[0]);
    mx_resolve(file);
    mx_clear_file_struct(file);
    file = NULL;

    return 0;
}
