#include <stdio.h>

struct X
{
	short s; // 2b
	int i;   // 1b
	char c;  // 4b
};

struct Y
{
	int i;   // 4b
	char c;  // 1b
	short s; // 2b
};

struct Z
{
	int   i;  // 4b
	short s;  // 2b
	char  c;  // 1b
};

int main(){
	printf("%lu", sizeof(struct X));
	printf("\n");
	printf("%lu", sizeof(struct Y));
	printf("\n");
	printf("%lu", sizeof(struct Z));
	printf("\n");
	return 0;
}
