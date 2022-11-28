#include "libmx.h"

 static int word_length(const char *s, char c) {
	int i = 0;
	for (;s[i] != c && s[i];i++);
	return i;
}

char **mx_strsplit(const char *s, char c) {
    if (!s) {
        return NULL;
    }
    int wlen = 0;
    int i = 0;
    char **arr = (char **)malloc((mx_count_words(s, c) + 1) * sizeof(char *));
    while ((*s) && (*s != '\0')) {
        if (*s != c){
            wlen = word_length(s, c);
            arr[i] = mx_strndup(s, wlen);
            s += wlen;
            i++;
            continue;
        }
        s++;
    }
    arr[i] = NULL;
    return arr;
}
