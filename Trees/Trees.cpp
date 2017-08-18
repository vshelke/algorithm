#include <iostream>
using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};

node* newnode(int data) {
	node* tmp = new node();
	tmp->data = data;
	tmp->left = tmp->right = NULL;
	return tmp;
}

node* insert(node* root, int data) {
	if (root == NULL)
		return newnode(data);
	else if (data <= root->data)
		root->left = insert(root->left);
	else
		root->right = insert(root->right);
	return root;
}

