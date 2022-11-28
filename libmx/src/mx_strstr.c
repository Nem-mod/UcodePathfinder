#include "libmx.h"
char* mx_strstr(const char* haystack, const char* needle) {
    int len = mx_strlen(needle);
    const char *str = haystack;
    while((str = mx_strchr(str, *needle)) != 0) {
        if(mx_strncmp(str, needle, len) == 0) {
    		return (char*)str;
    	}
		str++;
	}
	return 0;
}


