/**
	Algorithms for tree traversals...
	*	Process of visiting each node in the tree exactly once in some order.
	Two general types...
	1.	Breadth-first;(Level order)
	2.	Depth-first; 
			<<root>> <left> <right> - Preorder
			<left> <<root>> <right> - Inorder
			<left> <right> <<root>> - Postorder
*/
#include <iostream>
using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};

node* que[100];
int front = 0,rear = -1;

void enqueue(node* put) {
	que[++rear] = put;
}

void dequeue() {
	front++;
}

void bfs(node* root) {
	enqueue(root);
	do {
		node* tmp = que[front];
		cout << tmp->data <<' ';
		if (tmp->left != NULL) enqueue(tmp->left);
		if (tmp->right != NULL) enqueue(tmp->right);
		dequeue();
	}while (front != rear);
}

node* NewNode(int data) {
	node* tmp = new node() ;
	tmp->data = data;
	tmp->left = tmp->right = NULL;
	return tmp;
}

node* insert(node* root, int data) {
	
	if (root == NULL) 
		root = NewNode(data);
	
	else if (data <= root->data)
		root->left = insert(root->left, data);
	
	else
		root->right = insert(root->right, data);

	return root;
}

int main(int argc, char const *argv[])
{
	node* root = NULL;
	root = insert(root, 50);
	root = insert(root, 5);
	root = insert(root, 100);
	root = insert(root, 25);
	root = insert(root, 75);
	root = insert(root, 65);
	root = insert(root, 12);
	bfs(root);
	return 0;
}