#include "pathfinder.h"

char** mx_parse_line(char* str){
    char** str_arr_delimeter_dis = mx_strsplit(str, ',');
    char* str_dis = mx_strdup(str_arr_delimeter_dis[1]);
    char** str_arr_delimeter_br = mx_strsplit(str_arr_delimeter_dis[0], '-');
    char **out = (char**)malloc(sizeof(char*) * 4);    
    out[0] = mx_strdup(str_arr_delimeter_br[0]);
    out[1] = mx_strdup(str_arr_delimeter_br[1]); 
    out[2] = mx_strdup(str_dis);
    out[3] = NULL;
    mx_del_strarr(&str_arr_delimeter_dis);
    str_arr_delimeter_dis = NULL;
    mx_del_strarr(&str_arr_delimeter_br);
    str_arr_delimeter_br = NULL;
    mx_strdel(&str_dis);
    str_dis = NULL;

    return out;
}

