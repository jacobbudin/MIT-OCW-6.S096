#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "bintree.h"

///*** DO NOT CHANGE ANY FUNCTION DEFINITIONS ***///

// Recall node is defined in the header file
node *root = NULL;

// Insert a new node into the binary tree with node_id and data
void insert_node(int node_id, int data) {
	struct node *current = root;
	struct node *parent = NULL;
	char x;

	while(current != NULL){
		parent = current;

		if(node_id < current->node_id){
			current = current->left;
			x = 'l';
		}
		else{
			current = current->right;
			x = 'r';
		}
	}

	current = malloc(sizeof(struct node));
	current->node_id = node_id;
	current->data = data;

	if(parent == NULL){
		root = current;
	}
	else{
		if(x == 'r'){
			parent->right = current;
		}
		else{
			parent->left = current;
		}
	}
}

// Find the node with node_id, and return its data
int find_node_data(int node_id) {
	struct node *current = root;

	while(current != NULL){
		if(node_id == current->node_id){
			return current->data;
		}
		else if(node_id < current->node_id){
			current = current->left;
		}
		else{
			current = current->right;
		}
	}
	
	return 0;
}

///***** OPTIONAL: Challenge yourself w/ deletion if you want ***///
//Children nodes are fixed appropriately.
void remove_node(int node_id) {
	struct node *current = root;
	struct node *parent = NULL;
	struct node *deletor;
	struct node *replacement_parent = NULL;
	char prev;
	char replacement_prev;

	while(node_id != current->node_id){
		parent = current;

		if(node_id < current->node_id){
			current = current->left;
			prev = 'l';
		}
		else{
			current = current->right;
			prev = 'r';
		}
	}

	// Has no children? Reset parent
	if((current->left == NULL) && (current->right == NULL)){
		if(parent == NULL){
			root = NULL;
			return;
		}

		if(prev == 'r'){
			parent->right = NULL;
		}
		else{
			parent->left = NULL;
		}
		return;
	}
	// Has one child? Replace with child
	else if((current->left == NULL) || (current->right == NULL)){
		struct node *replacement;

		if((current->left != NULL)){
			replacement = current->left;
		}
		else{
			replacement = current->right;
		}

		if(parent == NULL){
			root = replacement;
			return;
		}

		if(prev == 'r'){
			parent->right = replacement;
		}
		else{
			parent->left = replacement;
		}
		return;
	}
	// Has two children? Find in-order successor
	else{
		deletor = replacement_parent = current;
		current = current->left;
		replacement_prev = 'l';

		while(current->right != NULL){
			replacement_parent = current;
			current = current->right;
			replacement_prev = 'r';
		}

		deletor->node_id = current->node_id;
		deletor->data = current->data;
		
		if(replacement_parent != NULL){
			if(replacement_prev == 'l'){
				replacement_parent->left = NULL;
			}
			else{
				replacement_parent->right = NULL;
			}
		}

		free(current);
	}
}
