#include "libmx.h"
char* mx_nbr_to_hex(unsigned long nbr) {
	char* output = NULL;
	unsigned long number = nbr;
	int length = 0;
	
	while(nbr) {
		nbr /= 16;
		length++;
	}
	
	if(length == 0) {
		return 0;
	}
	if(length > 1) {
		output = (char *)malloc(length + 1);
		int k = 0;
		while(k < length) {
			output[k] = '\0';
			k++;
		}
		output[k] = '\0';
	
	}

	int temp;
	for(int i = length - 1; i >= 0; i--) {
		temp = number % 16;
		
		if(temp < 10) {
			output[i] = temp + 48;
		} else {
			output[i] = temp + 32 + 55;
		}
		
		number /= 16;
	}
	return output;
}

