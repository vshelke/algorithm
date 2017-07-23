/**
	tree is used for Hireracheal data
	A collection of node rep hirearchy data
*/

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


node* insert_wo(node* root, int data) { //W/O Recursion
	if (root == NULL) {
		root = NewNode(data);
		return root;
	}
	node* tmp = root;
	while (1)  {
		if (data <= tmp->data) {
			if (tmp->left != NULL) 
				tmp = tmp->left;
	 		else {
	 			tmp->left = NewNode(data);
	 			break; }
		}
		else {
			if (tmp->right != NULL) 
				tmp = tmp->right;
	 		else {
	 			tmp->right = NewNode(data);
	 			break; }
		}
	}
	return root;
}

node* insert_recur(node* root, int data) {
	if (root == NULL) 
		root = NewNode(data);

	else if ( data <= root->data) 
		root->left = insert_recur(root->left, data);
	
	else
		root->right = insert_recur(root->right, data);

	return root;
}


int main() {
	node* root = NULL;
	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 20);
	root = insert(root, 30);
	cout << root->data <<'\t'<<root->left->data <<'\t'<<root->right->data<<'\n';
	cout << root->right->right->data;
	return 0;

}