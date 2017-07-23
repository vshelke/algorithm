#include<iostream>
using namespace std;
int length = 0;
struct node {
	int data;
	struct node *next;
};

void insert_end(struct node*& head, int d) {
	node* tmp= new struct node;
	node* newnode = new struct node;	
	tmp = head;
	int ctr = 0;
	while (ctr < length){
		tmp = tmp->next;
		ctr++;}
	newnode->data = d;
	tmp->next = newnode;
	newnode = tmp;
	length++;
	cout << tmp->next << '\n';
	insert_end(head, '\0'); 
}

int main() {
	struct node* head = new struct node;
	head == NULL;
		insert_end(head, 0);
	return 0;
}

