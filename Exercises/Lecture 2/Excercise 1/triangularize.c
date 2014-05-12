#include <stdio.h>
#include <stdlib.h>

#define MAX_COUNT 100

int main(){
	int j = 0;
	
	for (int i = 0; i < MAX_COUNT; ++i) {
		printf("%d\n", j);
		j += i;
	}

	return EXIT_SUCCESS;
}
