#include "libmx.h"

int mx_bubble_sort(char** arr, int size) {
	int swaps = 0;
	for(int i = 0; i < size - 1; i++) {
		for(int k = 0; k < size - i - 1; k++) {
			if(mx_strcmp(arr[k], arr[k + 1]) > 0) {
				char* tempString = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tempString;
				swaps++;
			}
		}
	}
	return swaps;
}

