#include<iostream>
using namespace std;

struct node {
	int info;
	struct node* left;
	struct node* right;
}*root;

class bt {
	public:
	bt() {
		root  = NULL;
	}
	int  Height (struct node* node) {
		if  (node == NULL) 
			return 0;
		else {
			int lHeight = Height(node->left);
			int rHeight = Height(node->right);
			if (lHeight > rHeight)
				return (lHeight+1);
			else
				return (rHeight+1);
			}
		}
	void insert(node*,node*);
	void display(node*,int);
};

void bt::insert(node *tree,node *newnode) {
	if (root==NULL) {
		root = newnode;
		root->info =  newnode->info;
		root->left = NULL;
		root->right = NULL;
		cout << "Root node is added"<<'\n';
	}
	if (tree->info > newnode->info) {
		if (tree->left!=NULL) {
			insert(tree->left,newnode);
		}
		else {
			tree->left =  newnode;
			(tree->left)->left=NULL;
			(tree->left)->right=NULL;
			cout <<"Node added to left"<<'\n';
		}
	}
	else {
		if (tree->right!=NULL) {
			insert(tree->right,newnode);
		}
		else {
			tree->right = newnode;
			(tree->right)->left=NULL;
			(tree->right)->right=NULL;
			cout <<"Node added to right"<<'\n';
		}
	}
}

void bt::display(node *ptr,int level) {
	int i;
	if (ptr!=NULL) {
		display(ptr->right,level+1);
		cout <<'\n';
		if (ptr == root)
			cout <<"Root->: ";
		else {
			for (i =0 ;i<level; i++) 
				cout <<"	";
			}
		cout << ptr->info;
		display(ptr->left,level+1);
		}
}

int main() {
	int choice;
	bt b;
	node *temp;
	while (1) {	
		cout <<"\n1.Insert Node";
		cout <<"\n2.Display Tree";
		cout <<"\n3.Height";
		cout <<"\n4.Exit";
		cin >> choice;
		switch(choice) {
			case 1:
					temp=new node;
					cout << "data: ";
					cin >> temp->info;
					b.insert(root,temp);
					break;
			case 2:
					cout <<'\n';
					b.display(root,1);
					cout <<'\n';
					break;
			case 3:
					cout <<"Height: "<< b.Height(root);
					break;
			}
	}
}							



	
