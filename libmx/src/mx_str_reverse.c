
#include "libmx.h"
void mx_str_reverse(char* s) { 

	int rev = mx_strlen(s);
	
	for(int i = 0; i < (rev / 2); i++) {
		mx_swap_char(&s[i], &s[rev-i-1]);
	}
}

