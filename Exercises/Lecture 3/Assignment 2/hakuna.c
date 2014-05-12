#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *str = malloc(sizeof(char)*(strlen("hakuna matata!")+1));
	strcpy(str, "hakuna matata!"); 
	printf("%s\n", str);
	free(str);
	return 0;
}
