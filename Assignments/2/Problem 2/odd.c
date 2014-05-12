#include <stdio.h>

void amaze1();
void amaze2();
void amaze3();
void amaze4();
void amaze5();
void amaze6();
void amaze7();

int main(){
	amaze1();
	amaze2();
	amaze3();
	amaze4();
	amaze5();
	amaze6();
	amaze7();
	return 0;
}

// while
void amaze1() {
	int i = 1;
	printf("amaze1:\t");
	while (i < 10){
		printf("%d ", i);
		i += 2;
	}
	printf("\n");
}

// for
void amaze2() {
	int i;
	printf("amaze2:\t");
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

// do-while
void amaze3() {
	int i = 1;
	printf("amaze3:\t");
	do {
		printf("%d ", i);
		i += 2;
	} while (i < 10);
	printf("\n");
}

// goto 
void amaze4() {
	int i = 1;

	printf("amaze4:\t");

	print:
		printf("%d ", i);
		i += 2;
	
	if(i < 10){
		goto print;
	}
	
	printf("\n");
}

// for
void amaze5() {
	int i;
	printf("amaze5:\t");
	for (i = 1; i <= 10; i++) {
		printf("%d ", i);
		i++;
	}
	printf("\n");
}

// for
void amaze6() {
	int i;
	printf("amaze6:\t");
	for (i = 1; i <= 10; i+=2){
		printf("%d ", i);
	}
	printf("\n");
}

// for
void amaze7() {
	int i = 1;
	printf("amaze7:\t");
	while (1) {
		printf("%d ", i);
		i += 2;
		if(i >= 10){
			break;
		}
	}
	printf("\n");
}
