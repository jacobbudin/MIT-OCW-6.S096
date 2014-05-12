#include <stdio.h>
#include "bintree.h"

int main() {
	/*
	Insert your test code here. Try inserting nodes then searching for them.

	When we grade, we will overwrite your main function with our own sequence of
	insertions and deletions to test your implementation. If you change the
	argument or return types of the binary tree functions, our grading code
	won't work!
	*/

	insert_node(4, 25);
	insert_node(2, 10);
	insert_node(3, 5);
	insert_node(5, 22);
	insert_node(1, 15);

	remove_node(2);

	printf("%d\n", find_node_data(1));
	printf("%d\n", find_node_data(3));
	printf("%d\n", find_node_data(4));
	printf("%d\n", find_node_data(5));

	return 0;
}
