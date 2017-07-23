#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
};

node* insert(node* head,int d) {
	if (head == NULL) {
		node* tmp = new node();
		tmp->data = d;
		tmp->next = NULL;
		return tmp;
	}

	node* tmp = new node();
	tmp->data = d;
	//tmp->next = NULL;
	tmp->next = head;
	head = tmp;
	return tmp;
}

void disp (node* head) {
	while (head != NULL) {
		cout << head->data<<'\t';
		head = head->next;
	}
	head = head->next;
	cout << '\v'<<head->data;
}

int main() {
	int opt,n;
	node* hd = NULL;
	while (opt) {
		cin >> n;
		hd = insert(hd, n);
		cin >> opt;
	}
	disp(hd);
	return 0;
}
