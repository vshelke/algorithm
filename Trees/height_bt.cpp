#include <iostream>
using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};

node* NewNode (int data) {
	node* tmp = new node() ;
	tmp->data = data;
	tmp->left = tmp->right = NULL;
	return tmp;
}

node* insert (node* root, int data)  {
	if (root == NULL)  {
		root = NewNode(data);
		return root;
	}

	node* tmp = root;
	while (1) {
		if (data <= tmp->data) {
			if (tmp->left != NULL)
				tmp = tmp->left;
			else {
				tmp->left = NewNode(data);
				break;
			}
		}
		else {
			if (tmp->right != NULL) 
				tmp = tmp->right;
			else {
				tmp->right = NewNode(data);
				break;
			}
		}
	}
	return root;
}

int height(node* root) {	
	if (root == NULL)
		return -1;

	int left = height(root->left);
	int right = height(root->right);
	int max = left > right ? left : right ;
	return max+1;
}
/**
	Height of tree = number of edges in longest path from the
	root node to leaf node
	ht of tree with one node = 0
	ht is measured from below. or max depth of the tree...

	*/
int main() {

	node* root = NULL;
	root = insert(root, 50);
	root = insert(root, 5);
	root = insert(root, 100);
	root = insert(root, 25);
	root = insert(root, 75);
	root = insert(root, 65);
	root = insert(root, 12);
	cout << height(root);
	return 0;
}
