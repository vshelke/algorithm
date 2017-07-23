#include<iostream>
using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};

node* newnode(int data) { 
  node* tmp = new node;    // "new" is like "malloc" 
  tmp->data = data; 
  tmp->left = NULL; 
  tmp->right = NULL;
	return tmp; 
} 

node* insert(node* root, int data) {
	if (root == NULL)
		root = newnode(data);
	else if (data <= root->data) 
		root->left = insert(root->left,data);
	else
		root->right = insert(root->right,data);
	
	return root;
}

int size(node* root) {
	if (root == NULL)
		return 0;
	else
		return (size(root->left) + 1 + size(root->right));
} 

int height(node* root) {
	if (root == NULL)
		return 0;
	else {
		int l = height(root->left);
		int r = height(root->right);

		if (l > r) return (l+1);
		else return (r+1);
}
}

int main() {
	node* root = NULL;
	int tmp = 8,n;
	while (tmp--) {
		cin >> n;
		root = insert(root,n);
	}
	cout << "Height = "<< size(root) ;
	cout << "\nNumber of Nodes = "<< height(root);
	return 0;
}

