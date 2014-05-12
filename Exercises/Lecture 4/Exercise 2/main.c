#include <stdlib.h>
#include <stdio.h>

union i{
	int x;
	char xl[4];
};

int main(){
	union i my_i;
	my_i.x = 100;
	printf("%d", my_i.x);
	printf("\n");
	printf("%x %x %x %x", my_i.xl[0], my_i.xl[1], my_i.xl[2], my_i.xl[3]);
	printf("\n");

	my_i.x = 65535;
	printf("%d", my_i.x);
	printf("\n");
	printf("%x %x %x %x", my_i.xl[0], my_i.xl[1], my_i.xl[2], my_i.xl[3]);
	printf("\n");

	return 0;
}
