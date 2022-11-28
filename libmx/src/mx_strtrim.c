#include "libmx.h"

char* mx_strtrim(const char*  str) {
	if(!str) {
		return NULL;
	}
	
	int start = 0; 
	int end = 0;
	int i = 0;
	int sflag = false;
	while(str[i] != '\0') {
		if(!mx_isspace(str[i])){
			if(sflag == false) {
				start = i;
				sflag = true;
			} else {
				end = i;
				
			}
		}
		i++;
	}
	if(sflag) {
		char* output = mx_strnew(end - start + 1);
		int k = 0;
		for(int i = start; i <= end; i++) {
			output[k] = str[i];
			k++;
			
		}
		return output;
	}
	return NULL;
}

