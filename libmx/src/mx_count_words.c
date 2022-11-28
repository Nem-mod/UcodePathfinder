int mx_count_words(const char *str, char c) {
	if(!str) {
		return -1;
	}
	int result = 0;
	int delflag = 0;
	if(c == 0) {
		return 0;
	}
	for(int i = 0; str[i] != '\0'; i++) {
		if(delflag == 0 && str[i] != c ) {
			result += 1;
			delflag = 1;
		} else if (delflag == 1 && str[i] == c) {
			delflag = 0;
		}
	}

	return result;
}

