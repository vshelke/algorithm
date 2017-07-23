//Main things to remember is the binary trees are recursive
//Two types are code are imo that are lookup()  and insert()
#include <iostream>
using namespace std;

//Building a basic binary tree node;;;
struct node {
	int data;
	struct node* left;
	struct node* right;
};

//This is just a helper function which returns a newnode so that
//the user doesn't have to write all the lines again and again.
node* NewNode(int data) {
	node* tmp = new node();
	tmp->data = data;
	tmp->left = NULL;
	tmp->right = NULL;
	return tmp;
}

//Now is the function for inserting a node into a binary search tree.
node* insert(node* tmp, int data) {
	if (tmp == NULL)//Meaning that if tmp points to NULL just
		//insert the fucking thing.
		return NewNode(data);
	else {
		//if we don't get anything NULL we keep on recuring down the tree.
		if (data <= tmp->data) 
			tmp->left = insert(tmp->left, data);
		else
			tmp->right = insert(tmp->right, data);

		return tmp;		
	}
}

/*node* stack[20] = {NULL};
int top = -1;
void push (node* tmp) {
    stack[++top] = tmp;
}
node* pop() {
    return stack[top--];
}
void Preorder(node *root) {
    /*if (root != NULL) {
        cout << root->data <<' ';
        Preorder(root->left);
        Preorder(root->right);
    }
    node* tmp; 
    push (root->left);
    while (top != -1) {
        tmp = stack[top];
        cout << pop()->data <<' ';
        if (tmp->left)
        	push(tmp->left);
        if (tmp->right)
        	push(tmp->right);
    }

}
*/

/*void insert_try(node*& tmp, int data) {
	if (tmp == NULL) {
		tmp = NewNode(data);
		return;
	}//Understand why this fucking thing doesn't work....
	else{
		if (data <= tmp->data)
			insert(tmp->left, data);
		else
			insert(tmp->right, data);
		return;
	}
}
*/

/*node* build123() {
	//Calling NewNode() three times and three pointersokay lets see.
	/*node* n1 = NewNode(1);
	node* n2 = NewNode(2);
	node* n3 = NewNode(3);
	n2->right = n3;
	n2->left = n1;
	return n2;*/
	//Using only one pointer variable okay lets see....
	/*node* tmp = NewNode(2);
	tmp->right = NewNode(3);
	tmp->left = NewNode(1);
	return tmp;*/
	//Calling insert three times & passing root pointer matlab ??
	/*node* root = insert(root, 2);
	root->right = insert(root->right, 3);
	root->left = insert(root->left, 1);
	return root;
}*/

node* min(node* root) {
	while (root->left != NULL)
		root = root->left;
	return root;
}

node* delete_tree(node* root,int key) {
	//base case
	if (root == NULL ) return root;

	if (key < root->data)
		root->left = delete_tree(root->left, key);
	else if (key > root->data)
		root->right = delete_tree(root->right, key);
	else
	{
		if (root->left == NULL) {
			node* tmp = root->right;
			delete root;
			return tmp;
		}	
		else if (root->right == NULL) {
			node* tmp = root->left;
			delete root;
			return tmp;
		}

		node* tmp = min(root->right);
		root->data = tmp->data;

		root->right = delete_tree(root->right, tmp->data);
	}
	return root;
}

void printTree(node* tmp) {
	if (tmp != NULL){
		printTree(tmp->left);
		cout << tmp->data <<' ';
		printTree(tmp->right);
	}
}
 int main(int argc, char const *argv[])
 {
 	node* root = new node();
 	root = NULL;
 	int ct = 8,tmp;
 	while (ct--) {
 		cin >> tmp;
 		root = insert(root,tmp);
 	}
 	//	root = build123();
 /*	cout << "Before ritesh::::\n";
	printTree(root);
 	 		//cout << "Size = " << size(root)<<'\n';
 	cin >>tmp;
 	root = delete_tree(root, tmp);
 	cout << "After ritesh \n";
 	*/printTree(root);
 	//Preorder(root);
 	return 0;
 }