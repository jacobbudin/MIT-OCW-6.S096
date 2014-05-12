#include <stdio.h>

int main(int argc, char ** argv){
	int i = 1;

	print:
		if(argc > 1){
			printf("%s\n", argv[i]);
		}

    if(i < (argc-1)) {
		i += 1;
		goto print;
    }

    return 0;
}
