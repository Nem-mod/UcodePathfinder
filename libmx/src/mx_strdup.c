#include "libmx.h"

char* mx_strdup(const char *s1) {
	char* result = mx_strnew(mx_strlen(s1));
	mx_strcpy(result, s1);
	return result;

}
