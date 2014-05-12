#include <stdio.h>

void square(int* num) {
	*num = *num * *num;
}

int main() {
	int x = 4;
	int* xp = &x;
	square(xp);
	printf("%d\n", x);
	return 0;
}
