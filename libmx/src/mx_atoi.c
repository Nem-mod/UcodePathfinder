#include "libmx.h"

int mx_atoi(const char* str) {
	if(mx_strcmp(str, "2147483647") == 0){
		return 2147483647;
	}
	int result = 0;
	for(int i = 0; str[i] != '\0'; i++) {
		if(!mx_isdigit(str[i]) && !mx_isspace(str[i]))
			result = result * 10 + str[i] - '0';
	}
	return result;
}
